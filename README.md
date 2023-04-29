Simulation:

     To simulate this project, you have to install TinkerCad software in the WebCatalog application and I attached the .brd file in Github, you have to download the file and run this project in TinkerCad. The source code also inbuilt into this project

Manual:

Introduction:

This project demonstrates how to control the brightness of an LED using UART communication between a microcontroller and a computer. The microcontroller receives commands from the computer through the UART interface and adjusts the brightness of the LED accordingly.

Hardware Requirements:

1. Microcontroller board (such as Arduino or Raspberry Pi)
2. LED
3. Resistors (220 Ohms)
4. Jumper wires
5. USB cable for connecting the microcontroller to the computer

Software Requirements:

1. Arduino IDE or any other integrated development environment for programming the microcontroller
2. Serial communication software (such as PuTTY) for sending commands from the computer to the microcontroller

Connections:

1. Connect the LED to a digital pin of the microcontroller through a 220 Ohms resistor.
2. Connect the microcontroller to the computer using a USB cable.

Instructions:

1. Open the Arduino IDE and create a new sketch.
2. Copy and paste the code for controlling LED brightness using UART communication into the sketch.
3. Upload the sketch to the microcontroller board.
4. Open the serial communication software (PuTTY) on the computer.
5. Configure the serial port settings (baud rate, data bits, stop bits, parity) to match those of the microcontroller.
6. Send commands from the computer to the microcontroller using the serial communication software to adjust the LED brightness.

Explanation:

The code starts by defining the digital pin to which the LED is connected and a variable to store the LED brightness value. In the 'setup()' function, the serial communication is initialized with a baud rate of 9600 bits per second, and the LED pin is set as output.

In the 'loop()' function, the code checks if any data is available to read from the serial communication buffer using the 'Serial.available()' function. If data is available, it is read using the 'Serial.read()' function, and the brightness of the LED is set using the 'analogWrite()' function. The 'analogWrite()' function sets the duty cycle of the digital signal, which in turn adjusts the brightness of the LED. The brightness value can range from 0 (off) to 255 (maximum brightness).

Conclusion:

This project demonstrates how to use UART communication to control the brightness of an LED connected to a microcontroller. The same concept can be extended to control other electronic devices using serial communication.
