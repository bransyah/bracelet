// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int sensorState = 0;

void setup() {
  // set up the LCD's number of columns and rows:
  pinMode(6, OUTPUT);
  pinMode(10, INPUT);
  pinMode(7, OUTPUT);
  lcd.begin(16, 2);
  // Print a message to the LCD.
}

void loop() {
  
  lcd.print("Dont Touch APP");
  delay(1000);
  
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);

  // read the state of the sensor/digital input
  sensorState = digitalRead(10);
  
  // check if sensor pin is HIGH. if it is, set the
  // LED on.
  if (sensorState == HIGH) {
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    lcd.print("Dont Touch !!!!!");
    delay(2000);
  } else {
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    lcd.clear();
  }
  delay(10); // Delay a little bit to improve simulation performance
}
 