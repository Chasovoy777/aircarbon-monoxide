 void setup() {
    Serial.begin(9600);
    pinMode(5, OUTPUT); //пин в режим выхода
 }

 void loop() {
    if (analogRead(A0) > 120) { //длительность писка
        for (int i = 0; i < 80; i++) {
            digitalWrite(5, HIGH);
            delay(5); //тональность писка
            digitalWrite(5, LOW);
            delay(5); //тональность писка
        }
    }
    Serial.print("Analog= ");
    Serial.print(analogRead(A0));
    Serial.print(" TTL= ");
    Serial.println(digitalRead(4));
    delay(1000);
 }
