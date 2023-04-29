// Control LED Brightness using UART Communication
// created by gowtham6122/
// If you have any doubts then contact me in instagram id: h_e_a_r_t__t_h_i_e_f_e_r
// This code is using for Transmitter

void setup() {
  Serial.begin(9600); // start serial communication at 9600bps
}

void loop() {
  // read the value from the potentiometer
  int pot = analogRead(A1);

  // send the value to the second Arduino over UART
  Serial.write(pot);

  delay(50); // wait a bit
}
