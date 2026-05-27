#include <SoftwareSerial.h>

SoftwareSerial xbee(D6, D7); // RX, TX

int relay2 = D2;  // LED
int relay3 = D3;  // Buzzer

void setup() {
  Serial.begin(9600);
  xbee.begin(9600);

  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);

  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
}

void loop() {
  if (xbee.available()) {
    char data = xbee.read();
    Serial.println(data);

    switch(data) {
      case 'A': digitalWrite(relay2, LOW); break;
      case 'B': digitalWrite(relay2, HIGH); break;
      case 'C': digitalWrite(relay3, LOW); break;
      case 'D': digitalWrite(relay3, HIGH); break;
    }
  }
}
