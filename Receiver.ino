// Control LED Brightness using UART Communication
// created by gowtham6122/
// If you have any doubts then contact me in instagram id: h_e_a_r_t__t_h_i_e_f_e_r
// This code is using for Receiver

int brightness = 0;

void setup() {
  Serial.begin(9600); // start serial communication at 9600bps
  pinMode(11, OUTPUT); // set LED pin as output
}

void loop() {
  if (Serial.available() > 0) { // if data is available to read
    brightness = Serial.read(); // read the brightness value

    analogWrite(11, brightness); // set LED brightness
  }
}
