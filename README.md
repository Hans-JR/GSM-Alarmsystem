# GSM-Alarmsystem
Based on Arduino Nano and SIM800L

The system provides 3 inputs. One is used for an PIR detector.
This PIR sends a HIGH-Signal of a certain time and returnes to low if no motion is detected.
If the signal is retrigered, a new message is being sent.
The other two inputs issue a message, if the input goes from low to high. Only one message is being sent per event.
The tel number and the individual text has to be entered into the script prior compilation.
A PCB and a simple Housing are available (folder KiCad and Gehäuse)
