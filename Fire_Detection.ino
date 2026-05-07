#define FLAME_SENSOR 34   // Flame sensor digital output
#define BUZZER 25         // Buzzer pin
#define LED 26            // LED pin
 
void setup() {
 Serial.begin(115200);
 
 pinMode(FLAME_SENSOR, INPUT);
 pinMode(BUZZER, OUTPUT);
 pinMode(LED, OUTPUT);
 
 digitalWrite(BUZZER, LOW);
 digitalWrite(LED, HIGH);
}
 
void loop() {
 int flameState = digitalRead(FLAME_SENSOR);
 
 // Flame sensor usually LOW when fire detected
 if (flameState == LOW) {
   Serial.println("Fire Detected!");
 
   digitalWrite(BUZZER, HIGH);
   digitalWrite(LED, HIGH);
 
   delay(500);
 } else {
   Serial.println("No Fire");
 
   digitalWrite(BUZZER, LOW);
   digitalWrite(LED, LOW);
 
   delay(500);
 }
}