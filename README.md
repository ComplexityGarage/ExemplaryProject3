# ExemplaryProject 3  (Title of the project)
# Authors 
- Jan Kowalczyk
# Description of the project 
Interactive map of Cracow's districts
It's made to learn about districts of the city of Cracow. Each button accounts for one district. When button is turned on LED diode shines. You can also add more of them if you're capable to
# Science and tech used 
1)Arduino Uno
2)Arduino Mega
3)20 Led diodes
4)3D printer to print map of Cracow
5)4 arduino breadboards
6)18 arduino buttons
7)Over a hundred of arduino wires
8)Regular printer to print a second map and list of districts
# Cuircuit images

![image](https://github.com/ComplexityGarage/ExemplaryProject3/assets/157370605/40de0bd0-b730-4f9b-8341-b9e9ec525340)

![image](https://github.com/ComplexityGarage/ExemplaryProject3/assets/157370605/78eef01d-b342-4915-9043-17fb987be324)

![image](https://github.com/ComplexityGarage/ExemplaryProject3/assets/157370605/666d7b2a-fba5-4ad7-944a-6e85097aa326)

# Codes
Arduino Uno:

int ButtonState=0;

void setup() {
pinMode(11,INPUT);
}

void loop() {
ButtonState=digitalRead(7);
if(ButtonState==HIGH)
{
  digitalWrite(3,HIGH);

    digitalWrite(7,HIGH);

}
else
{
  digitalWrite(3,LOW);
    digitalWrite(7,LOW);
}
  {
ButtonState=digitalRead(6);
if(ButtonState==HIGH)
{
  digitalWrite(13,HIGH);
}
else
{
  digitalWrite(13,LOW);
}
  }
    {
ButtonState=digitalRead(5);
if(ButtonState==HIGH)
{
  digitalWrite(8,HIGH);
}
else
{
  digitalWrite(8,LOW);
}
  }
    {
ButtonState=digitalRead(10);
if(ButtonState==HIGH)
{
  digitalWrite(2,HIGH);
}
else
{
  digitalWrite(2,LOW);
}
  }
  {
ButtonState=digitalRead(11);
if(ButtonState==HIGH)
{
  digitalWrite(12,HIGH);
}
else
{
  digitalWrite(12,LOW);
}
  }
  {
ButtonState=digitalRead(1);
if(ButtonState==HIGH)
{
  digitalWrite(9,HIGH);
}
else
{
  digitalWrite(9,LOW);
}
  }
}

Arduino Mega:

int ButtonState=0;

void setup() {
pinMode(53,INPUT);
}

void loop() {
ButtonState=digitalRead(53);
if(ButtonState==HIGH)
{
  digitalWrite(9,HIGH);

    digitalWrite(12,HIGH);

}
else
{
  digitalWrite(9,LOW);
    digitalWrite(12,LOW);
}
  {
ButtonState=digitalRead(52);
if(ButtonState==HIGH)
{
  digitalWrite(11,HIGH);
}
else
{
  digitalWrite(11,LOW);
}
  }
    {
ButtonState=digitalRead(51);
if(ButtonState==HIGH)
{
  digitalWrite(10,HIGH);
}
else
{
  digitalWrite(10,LOW);
}
  }
    {
ButtonState=digitalRead(50);
if(ButtonState==HIGH)
{
  digitalWrite(13,HIGH);
}
else
{
  digitalWrite(13,LOW);
}
  }
  {
ButtonState=digitalRead(49);
if(ButtonState==HIGH)
{
  digitalWrite(22,HIGH);
}
else
{
  digitalWrite(22,LOW);
}
  }
  {
ButtonState=digitalRead(48);
if(ButtonState==HIGH)
{
  digitalWrite(6,HIGH);
}
else
{
  digitalWrite(6,LOW);
}
  }
  {
ButtonState=digitalRead(47);
if(ButtonState==HIGH)
{
  digitalWrite(7,HIGH);
}
else
{
  digitalWrite(7,LOW);
}
  }
  {
ButtonState=digitalRead(46);
if(ButtonState==HIGH)
{
  digitalWrite(4,HIGH);
}
else
{
  digitalWrite(4,LOW);
}
  }
  {
ButtonState=digitalRead(33);
if(ButtonState==HIGH)
{
  digitalWrite(5,HIGH);
}
else
{
  digitalWrite(5,LOW);
}
  }
  {
ButtonState=digitalRead(32);
if(ButtonState==HIGH)
{
  digitalWrite(8,HIGH);
}
else
{
  digitalWrite(8,LOW);
}
  }
  {
ButtonState=digitalRead(31);
if(ButtonState==HIGH)
{
  digitalWrite(3,HIGH);
}
else
{
  digitalWrite(3,LOW);
}
  }
  {
ButtonState=digitalRead(30);
if(ButtonState==HIGH)
{
  digitalWrite(2,HIGH);
  digitalWrite(25,HIGH);
}
else
{
  digitalWrite(2,LOW);
  digitalWrite(25,LOW);
}
  }
}

# Tinkercad project of map of Cracow
https://www.tinkercad.com/things/0eEmbOuDVCI-terrific-amur-lahdi

# Printable map and list of districts
![mapeczkaaaa](https://github.com/ComplexityGarage/ExemplaryProject3/assets/157370605/d66b1ca3-69bb-48db-8f1c-4f3a95628c60)
[dzielniczki.pdf](https://github.com/ComplexityGarage/ExemplaryProject3/files/14411185/dzielniczki.pdf)

# State of the art 
The project is done and works. All images are in cuicuit section.
# What next?
There may be some upgrades to improve its esthetics
# Sources 
- [Writing on GitHub] ( https://docs.github.com/en/get-started/writing-on-github )
- [Tinkercad]  ( https://www.tinkercad.com/dashboard )
- [More complex map] ( https://www.bip.krakow.pl/zalaczniki/dokumenty/n/128328/karta )
- [List of districts] ( https://www.krakow.pl/samorzad/201542,artykul,lista_dzielnic.html )
