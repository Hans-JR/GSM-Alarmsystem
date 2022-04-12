# GSM-Alarmsystem
Based on Arduino Nano and SIM800L

The system provides 3 inputs. One is used for an PIR detector.
This PIR sends a HIGH-Signal of a certain time and returnes to low if no motion is detected.
If the signal is retrigered, a new message is being sent.
The other two inputs issue a message, if the input goes from low to high. Only one message is being sent per event.
The tel number and the individual text has to be entered into the script prior compilation.
If a terminal is connected to the Arduino serial port, all transmitted messages will be displayed on the terminal. The baudrate is 9600.
A PCB and a simple housing are available (folder KiCad and Gehäuse)
