#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

// LEFT MOTOR
const int IN1 = 27;
const int IN2 = 26;

// RIGHT MOTOR
const int IN3 = 25;
const int IN4 = 33;

void setup() {

  Serial.begin(115200);

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Bluetooth Name
  SerialBT.begin("ESP32_CAR");

  Serial.println("Bluetooth Started");
}

void loop() {

  if (SerialBT.available()) {

    char command = SerialBT.read();

    Serial.println(command);

    switch(command) {

      case 'F':   // FORWARD

        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);

        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);

        break;

      case 'B':   // BACKWARD

        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);

        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);

        break;

      case 'L':   // LEFT

        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);

        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);

        break;

      case 'R':   // RIGHT

        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);

        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);

        break;

      case 'S':   // STOP

        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);

        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);

        break;
    }
  }
}