
# Visible Light Communication with Arduino
This project aims to develop a laser light communication system between two computers using two Arduinos. The system uses an LDR (Light Dependent Resistor) module and a Laser Module for data transmission. The system consists of two main parts: Sender and Receiver.

## Project Overview
In the project, the Sender system converts the characters from the ASCII table into binary form and transmits them using laser light. The Receiver system detects this laser light and decodes the incoming signal to retrieve the character in ASCII format.


### Sender System
The **Sender System** uses an Arduino and a laser module to transmit data in the form of laser light. Each character is first converted into **binary** form according to the **ASCII** table. The system works as follows:

1. **Character Conversion**:  
   Each character in the string is read one by one and converted to its corresponding **8-bit binary form**.

2. **Reversing the Binary**:  
   Before sending, the binary form of each character is **reversed**. For example, to send the character **'h'**, which has the binary form **'01101000'**, the sender reverses it to **'00010110'**.

3. **Sending the Signal**:  
   The **binary signal** is transmitted by turning the laser on and off:  
   - If the bit is **1**, the laser is turned **on**.  
   - If the bit is **0**, the laser is turned **off** for a short period.

4. **Start Bit**:  
   Before each character, a **start bit** (1) is sent so the receiver knows a new character is coming. The start bit ensures synchronization between sender and receiver.

5. **Character Separation**:  
   A longer pause between characters is introduced to help the receiver understand when one character has ended and the next one is about to begin.

By repeating this process for each character in the string, the sender system transmits the entire message as a sequence of laser pulses, which can later be decoded by the receiver system.


### Receiver System

The **Receiver System** is responsible for detecting the laser light and decoding the received signal into characters. Here’s how it works:

1. **Waiting for the Signal**

The receiver continuously monitors the incoming laser signal.

2. **Receiving and Decoding the Signal**

Once the receiver detects a laser signal, it starts reading **9 bits** for each character:
- The first bit is the **start bit (1)**, indicating the beginning of a new character.
- The next 8 bits represent the character in **binary form**.

3. **Reading the Bits**

After detecting the start bit, the receiver does not immediately read the incoming bit. Instead, it waits for **half the time** between two bit transmissions and reads the signal in the middle of this interval.  
- If the laser is **on**, the received bit is **1**.
- If the laser is **off**, the received bit is **0**.

4. **Order of the Bits**

The system reads the bits in **normal order**:
- First, it receives the **Most Significant Bit (MSB)**.
- Then, it reads the subsequent bits in sequence until it reaches the **Least Significant Bit (LSB)**.

5. **Decoding and Displaying the Character**

After receiving all 9 bits, the receiver decodes the binary sequence into an ASCII character and displays it on the serial monitor.

By repeating this process, the receiver successfully reconstructs the transmitted message and displays it on the screen.



## Key Components of the Project
- 2 x **Arduino** board (For example, Arduino Uno or Mega)
- 1 x **Laser Module**
- 1 x **LDR (Light Dependent Resistor)** Module
- Jumper wires and breadboard
- **Arduino IDE** software



  ## Usage
1. Connect the **Laser Module** to the **Sender** Arduino and upload the `sender.ino` file to the board.
2. Connect the **LDR (Light Dependent Resistor)** Module to the **Receiver** Arduino and upload the `receiver.ino` file to the board.
3. Once the system is set up, run the `receiverSystem.ino` code on the **Receiver** computer.
4. Run the `senderSystem.ino` code on the **Sender** computer.
5. This will establish communication between the two computers via laser light.


The system operates inside a box, where an environment without light is created to ensure clear signal transmission.


![image](https://github.com/user-attachments/assets/21a2bcc7-cf49-4d7b-9c39-88bbe3c47ac6)





