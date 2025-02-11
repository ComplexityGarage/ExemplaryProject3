#include <Wire.h>
#include <LiquidCrystal.h>
#include <SoftwareSerial.h>
#include "MPU6050.h"

// Inicjalizacja LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Inicjalizacja akcelerometru
MPU6050 mpu;

// Inicjalizacja SoftwareSerial dla ESP8266
SoftwareSerial espSerial(7, 8); // RX, TX (odpowiada D7 i D8)

void setup() {
  // Inicjalizacja komunikacji szeregowej
  Serial.begin(9600);        // Do debugowania przez USB
  espSerial.begin(9600);     // Komunikacja z ESP8266
  Wire.begin();              // Inicjalizacja I2C dla MPU6050
  lcd.begin(16, 2);          // Inicjalizacja LCD
  mpu.initialize();          // Inicjalizacja akcelerometru

  // Test połączenia z MPU6050
  if (mpu.testConnection()) {
    lcd.setCursor(0, 0);
    lcd.print("MPU6050 OK");
    delay(2000);
  } else {
    lcd.setCursor(0, 0);
    lcd.print("MPU6050 ERROR");
    while (1); // Zatrzymaj program, jeśli brak połączenia
  }
}

void loop() {
  // Odczyt danych z akcelerometru
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);

  // Przelicz przyspieszenie na wartości G
  float accX = ax / 16384.0;
  float accY = ay / 16384.0;
  float accZ = az / 16384.0;

  // Wyświetlanie na LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  if (accX > 1.0) {
    lcd.print("Zbyt agresywne");
    lcd.setCursor(0, 1);
    lcd.print("Ruszanie!");
  } else if (accX < -1.0) {
    lcd.print("Zbyt agresywne");
    lcd.setCursor(0, 1);
    lcd.print("Hamowanie!");
  } else {
    lcd.print("Jazda OK");
  }

  // Wysyłanie danych do ESP8266
  String dataToSend = String(accX) + "," + String(accY) + "," + String(accZ);
  espSerial.println(dataToSend);

  delay(500);
}

