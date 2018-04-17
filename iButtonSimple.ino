#include <OneWire.h>

OneWire  ds(4); // Connect data to pin 4

void setup() {
  Serial.begin(9600);

  pinMode(13, OUTPUT); // Connect LED+/- to pin 13
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);

}

void loop() {

  byte addr[8];

  if ( !ds.search(addr)) {
    ds.reset_search();
    return;
  }

  Serial.print("Serial#: ");
  for ( int i = 0; i < 8; i++) {
    Serial.write(' ');
    Serial.print(addr[i], HEX);
  }

  if (OneWire::crc8(addr, 7) != addr[7]) {
    Serial.println("CRC is not valid!");
    return;
  }
  Serial.println();
}
