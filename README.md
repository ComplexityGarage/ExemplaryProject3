# Economic driving module
# Authors 
- Zuzanna Przygodzka

# Description of the project 
The **Economic Driving Module** is an innovative system designed to monitor and improve driving habits by providing real-time feedback. It uses an accelerometer (MPU6050) to analyze driving behaviors, such as acceleration and braking patterns. The data is processed by an Arduino microcontroller and displayed on a 16x2 LCD screen. The module promotes safer and more economical driving by informing users when their driving becomes overly aggressive. 

In addition to its functionality, the module has been designed with a custom 3D-printed enclosure, ensuring durability and ease of use in vehicles.

### Features:
1. **Motion Detection**: Real-time analysis of acceleration and deceleration using MPU6050.
2. **LCD Display**: Feedback like "Too fast starting" or "Too fast braking," along with graphical visualization of acceleration levels.
3. **Custom Enclosure**: A compact and practical housing for the hardware, created with a 3D printer for added portability and protection.

![Moduł jazdy ekonomicznej](images/c67f68ea-f3cb-4466-ab36-175a18956dcf.jpg)

# Science and tech used 
- **Arduino Microcontroller**: Processes sensor data and drives the LCD output.
- **MPU6050 Accelerometer**: Measures acceleration on three axes and detects sudden movements.
- **16x2 LCD Display**: Provides real-time visual feedback to the driver.
- **I2C Protocol**: Ensures efficient communication between the MPU6050 and the Arduino.
- **3D Printing**: Designed and printed a custom enclosure to house all components securely.

### Visualization Example
The LCD updates dynamically to provide:
- Aggressive acceleration feedback: "Too fast starting."
- Aggressive braking feedback: "Too fast braking."
- Smooth driving feedback: "Driving OK," accompanied by a graphical representation of acceleration intensity.

# State of the art 
The project aligns with modern vehicle-integrated systems that monitor driving behavior. However, it stands out due to its cost-effectiveness and accessibility. Unlike commercial systems requiring expensive installations, this DIY approach provides similar functionality at a fraction of the cost, making it ideal for personal use.

### Comparison to Advanced Systems
| Feature                | Advanced Systems      | Economic Driving Module |
|-------------------------|-----------------------|--------------------------|
| Cost                   | High                 | Low                      |
| Real-time Feedback     | Yes                  | Yes                      |
| Custom Enclosure       | Rarely Customized    | 3D-Printed Housing       |
| Data Transmission      | Cloud-based Optional | Local (Cloud Optional)   |

## Design and Prototyping
- **3D Enclosure**: The enclosure was custom-designed to fit the Arduino, MPU6050, and LCD securely. It was printed on a 3D printer using PLA filament, ensuring durability and ease of assembly.
- **Hardware Integration**: The design ensures a user-friendly layout for both installation in a vehicle and portability.
  
# What next?
The prototype can be further developed by:
1. **Wi-Fi Integration**: Adding ESP8266 to enable cloud storage and analysis on platforms like ThingSpeak.
2. **GPS Module**: Incorporating location data for route-specific insights.
3. **Mobile App**: Developing a companion app to provide detailed analytics and driving improvement tips.
4. **Machine Learning**: Using historical data to predict driving behaviors and recommend personalized improvements.
5. 
# Sources 
- [Writing on GitHub](https://docs.github.com/en/get-started/writing-on-github)
- [MPU6050 Documentation](https://www.invensense.com/products/motion-tracking/6-axis/mpu-6050/)
- [Arduino LCD Library](https://www.arduino.cc/en/Reference/LiquidCrystal)
- [3D Printing Basics](https://www.3dhubs.com/knowledge-base/how-3d-printing-works/)
