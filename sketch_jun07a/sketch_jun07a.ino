int a; // integer analog input (0 - 1023)
float temp; // decimal temperature values

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600); // prepare serial monitor

void loop() {
  a=analogRead(A1); // read analog value from pin A1
  temp = (5.0 * analogRead(A1) * 100.0) / 1023;
  if (temp<=45) {
  Serial.print(temp); // print the temperature value to the serial monitor;
  Serial.println(" βαθμοί Κελσίου. Φυσιολογική Θερμοκρασία");
  else 
  Serial.print(temp);
  Serial.println(" βαθμοί Κελσίου. ΚΙΝΔΥΝΟΣ! ΥΨΗΛΗ ΠΙΘΑΝΟΤΗΤΑ ΠΥΡΚΑΓΙΑΣ");
  }
  delay(1000); //wait for 1 sec
}
