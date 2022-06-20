
// this code is to make the alarm bell ring 
// according to the time table of the semester. 

void setup() {
  // initialize digital pin as an output.
  pinMode(13, OUTPUT);
}

void bellring(int period){
  int t = period * 6000;  // multiply the period length times 6000 ms
  digitalWrite(13, HIGH); // turn on motor
  delay(5000);            // leave motor on
  digitalWrite(13, LOW);   // turn off motor
  delay(t);               // delay for the duration of the period
}

// this code currently will ring the bells for Tues-Fri timetable
void loop() {
  bellring(1);              // test bell
  bellring(40);             // 7:20 AM bell
  bellring(40);             // 8:00 AM bell
  bellring(40);             // 8:40 AM bell
  bellring(20);             // 9:20 AM bell
  bellring(20);             // 9:40 AM bell
  bellring(20);             // 10:00 AM bell
  bellring(40);             // 10:20 AM bell
  bellring(40);             // 11:00 AM bell
  bellring(10);             // 11:40 AM bell
  bellring(40);             // 11:50 AM bell
  bellring(40);             // 12:30 PM bell
  bellring(30);             // 1:10 PM bell
  bellring(20);             // 1:40 PM bell
  bellring(40);             // 2:00 PM bell
  bellring(40);             // 2:40 PM bell
  bellring(40);             // 3:20 PM bell
  bellring(40);             // 4:00 PM bell
  bellring(60);             // 5:00 PM bell
}
