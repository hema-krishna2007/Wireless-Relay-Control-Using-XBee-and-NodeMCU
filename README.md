# Wireless-Relay-Control-Using-XBee-and-NodeMCU

Wireless Relay Control Using XBee and NodeMCU is a wireless switching system that enables remote control of electrical loads through ZigBee-based communication. The project uses two Digi XBee modules to establish a wireless link between a transmitter and a receiver. Commands are sent from a computer through the Arduino IDE Serial Monitor to the transmitter XBee module. The receiver XBee forwards the commands to a NodeMCU ESP8266, which controls relay outputs connected to an LED and a buzzer.

This project demonstrates wireless device control, serial communication, relay interfacing, and embedded system integration. The same concept can be extended to control bulbs, fans, motors, industrial equipment, and smart automation systems.

---

# 📖 Project Overview

The objective of this project is to establish reliable wireless communication between two XBee modules and use the received commands to control relay outputs through a NodeMCU microcontroller.

The system receives commands from a computer, transmits them wirelessly using ZigBee technology, and performs the corresponding action at the receiver side. The relay module acts as an electrically operated switch, allowing safe control of connected devices.

---

# 🏗 System Architecture Flow

```text
+----------------------+
| Arduino Serial Monitor|
+----------+-----------+
           |
           v
+----------------------+
| XBee Transmitter     |
+----------+-----------+
           |
           | ZigBee Communication
           | (2.4 GHz)
           v
+----------------------+
| XBee Receiver        |
+----------+-----------+
           |
           | UART
           v
+----------------------+
| NodeMCU ESP8266      |
+----------+-----------+
           |
           v
+----------------------+
| Relay Module         |
+----------+-----------+
           |
      +----+----+
      |         |
      v         v
    LED      Buzzer
```

---

# 🔧 Hardware and Technology Used

## Hardware Components

- NodeMCU ESP8266
- Digi XBee Transmitter Module
- Digi XBee Receiver Module
- XBee USB Adapter
- 4-Channel Relay Module
- LED
- 220Ω Resistor
- Active Buzzer
- Jumper Wires
- USB Cable

## Technologies

- Embedded Systems
- Wireless Communication
- ZigBee Technology
- UART Serial Communication
- Arduino IDE
- Relay Interfacing

---

# ✨ Key Features

- Wireless relay control using XBee modules
- Real-time command transmission
- ZigBee-based communication
- NodeMCU ESP8266 integration
- LED and buzzer output control
- Expandable for home and industrial automation
- Simple and low-cost implementation
- Reliable UART communication

---

# 🚀 Why This Project Is Special

- Eliminates the need for long communication cables.
- Demonstrates practical wireless device control.
- Can be easily upgraded for home automation systems.
- Uses industry-recognized XBee communication modules.
- Suitable for learning embedded systems and wireless networking.
- Scalable for controlling multiple devices through relay outputs.

---

# 🌍 Real-World Applications

- Home Automation
- Smart Building Systems
- Industrial Equipment Control
- Wireless Switching Systems
- Remote Monitoring Applications
- IoT Prototyping
- Educational Embedded System Projects
- Laboratory Demonstrations

---

# 💻 Source Code

The complete source code is available in the **code/** directory.

### Supported Commands

| Command | Action |
|----------|----------|
| A | LED ON |
| B | LED OFF |
| C | Buzzer ON |
| D | Buzzer OFF |

---

# 📷 Project Images

Project images are available in the **images/** directory.

### Suggested Images

- Complete Hardware Setup
- Wiring Connections
- Relay Output Demonstration
- XBee Communication Setup

Example:

```text
images/
├── project_setup.jpg
├── wiring_connections.jpg
├── relay_output.jpg
└── xbee_modules.jpg
```

---

# 🎓 Learning Outcomes

Through this project, the following concepts were learned:

- UART Communication
- ZigBee Wireless Networking
- XBee Configuration and Usage
- NodeMCU Programming
- Relay Interfacing
- Embedded System Design
- Serial Data Communication
- Hardware Integration
- Wireless Control Systems
- IoT Fundamentals

---

# ⚙️ Installation Instructions

## Step 1

Install Arduino IDE.

## Step 2

Install ESP8266 Board Package in Arduino IDE.

## Step 3

Connect NodeMCU to the computer using a USB cable.

## Step 4

Open the source code located in:

```text
code/receiver_code.ino
```

## Step 5

Select:

```text
Board:
NodeMCU 1.0 (ESP-12E Module)
```

## Step 6

Select the correct COM Port.

## Step 7

Upload the code to NodeMCU.

## Step 8

Connect all hardware components according to the wiring diagram.

## Step 9

Open Arduino IDE Serial Monitor connected to the transmitter XBee.

## Step 10

Send commands:

```text
A
B
C
D
```

Observe the corresponding output.

---

# 🔌 Wiring Connections

## XBee Receiver to NodeMCU

| XBee Pin | NodeMCU Pin |
|-----------|-------------|
| VCC | 3.3V |
| TX | D6 |
| RX | D7 |
| GND | GND |

---

## Relay Module to NodeMCU

| Relay Pin | NodeMCU Pin |
|------------|-------------|
| IN2 | D2 |
| IN3 | D3 |
| VCC | VIN (5V) |
| GND | GND |

---

## LED Connection

| Component | Connection |
|------------|------------|
| Relay COM | 3.3V |
| Relay NO | 220Ω Resistor |
| Resistor | LED Positive |
| LED Negative | GND |

---

## Buzzer Connection

| Component | Connection |
|------------|------------|
| Relay COM | 3.3V |
| Relay NO | Buzzer Positive |
| Buzzer Negative | GND |

---

# 🛠 Troubleshooting

### No Data Received

- Verify XBee power supply.
- Check TX and RX wiring.
- Confirm baud rate is set to 9600.
- Verify common ground connection.

### Relay Not Switching

- Check relay module power supply.
- Verify IN2 and IN3 connections.
- Ensure NodeMCU is powered correctly.

### LED Not Glowing

- Verify LED polarity.
- Check resistor connection.
- Confirm relay switching operation.

### Buzzer Not Working

- Verify buzzer polarity.
- Check relay output wiring.
- Confirm buzzer is functional.

---

# 💬 Feedback

Feedback, suggestions, and improvements are welcome.

If you find this project useful, consider starring the repository and sharing your suggestions through GitHub Issues.

---

# 👨‍💻 Author

**Hema Krishna**

B.Tech – Electronics and Communication Engineering (ECE)

---

# 🏷 Tags

`NodeMCU`
`ESP8266`
`XBee`
`ZigBee`
`Wireless Communication`
`Relay Control`
`Embedded Systems`
`Arduino IDE`
`UART`
`IoT`
`Home Automation`
`Electronics Project`
`Microcontroller`
`Remote Switching`
`Wireless Automation`

---
⭐ If you found this project helpful, consider giving this repository a star.
