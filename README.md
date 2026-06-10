# ESP32 Bluetooth Controlled Robot

A simple Bluetooth-controlled differential drive robot built using an ESP32 and motor driver module. The robot can move Forward, Backward, Left, Right, and Stop using commands sent from a Bluetooth terminal or mobile app.

## Features

- Bluetooth wireless control
- Forward movement
- Backward movement
- Left turn
- Right turn
- Emergency stop
- Simple and beginner-friendly design

## Hardware Used

- ESP32 Development Board
- L298N / L293D Motor Driver
- 2 DC Gear Motors
- Robot Chassis
- Wheels
- Battery Pack
- Jumper Wires

## Pin Configuration

| Function | ESP32 Pin |
|----------|-----------|
| IN1 | GPIO 27 |
| IN2 | GPIO 26 |
| IN3 | GPIO 25 |
| IN4 | GPIO 33 |

## Bluetooth Commands

| Command | Action |
|----------|---------|
| F | Forward |
| B | Backward |
| L | Left |
| R | Right |
| S | Stop |

Bluetooth Device Name:

ESP32_CAR

## Getting Started

1. Install Arduino IDE.
2. Install ESP32 Board Package.
3. Open code/ESP32_Bluetooth_Robot.ino.
4. Select ESP32 board.
5. Upload the code.
6. Pair phone with ESP32_CAR.
7. Send commands using any Bluetooth terminal application.

## Future Improvements

- PWM Speed Control
- Obstacle Avoidance
- Line Following
- Voice Control
- Mobile App Interface
- FPV Camera Support

## License

MIT License