
/*
  This code is free software; you can redistribute it and/or
  modify it under the terms of the MIT License
  

 It is based on several examples on Github 
 Modified and compiled by Hans-J. Richter
 Version 1.0, May 1. 2021
 
The motion detector sends continously when output goes HIGH
The two other inputs detect a HIGH going signal. A message is being send everytime when the signal goes from LOW to HIGH

Hardware: Aruino nano, GSM SIM800L
On Arduino nano only pins 2 and 3 can handle interrupts 

Connections: TxD > D4; RxD > D5; LED Motion > D12; LED armed > D11; PIR > D8; Contact 1 > D2, Contact 2 > D3

*/


#include <SoftwareSerial.h>

SoftwareSerial mySerial(4,5); //Rx and Tx to  SIM800  

char incomingByte;
String inputString;
int ledPin1 = 11;
int ledPin2 = 12;

bool active = false;
int button1 = 8 ;             // HIGH from Motion Detector
const byte InterruptPin2 = 2; // GND from Bilge Relays
const byte InterruptPin3 = 3; // GND Door Keller Reedswitch
int button4 = 7;              // 5v+ for arming the system (add a 10k resistor from pin to gnd)
bool button_State;            //Button state


void setup()
{
      pinMode (ledPin1, OUTPUT);
      pinMode (ledPin2, OUTPUT);
      pinMode(LED_BUILTIN, OUTPUT);
      Serial.begin(9600);
      mySerial.begin(9600);
      // Check if you're currently connected to mySerial
      while(!mySerial.available()){
        mySerial.println("AT");
        delay(1000);
        Serial.println("connecting....");
        }

      Serial.println("Connected.."); 
      mySerial.println("AT+CMGF=1\r\n");          //Set SMS Text Mode
      delay(1000); 
      mySerial.println("AT+CNMI=1,2,0,0,0");      //command to receive new messages from the network
      delay(1000);
      mySerial.println("AT+CMGL=\"REC UNREAD\""); // Read unread messages
      delay(1000);
      digitalWrite(LED_BUILTIN, HIGH);            // turn the LED on if modem is connected
      delay(1000); 

      pinMode(button1, INPUT);                                                  // Input from PIR-Sensor. High means motion detected
      pinMode(InterruptPin2, INPUT_PULLUP);                                     // from Bilge relays, if signal goes high alarm is initiated
      attachInterrupt(digitalPinToInterrupt(InterruptPin2), pin2_ISR, RISING);  // interrupt for Bilge relays
      pinMode(InterruptPin3, INPUT_PULLUP);                                     // from reed switch. If signal goes high alarm is initiated
      attachInterrupt(digitalPinToInterrupt(InterruptPin3), pin3_ISR, RISING);  // interrupt for reed contact
      pinMode(button4, INPUT);                                                  //The button is always LOW unless the switch is set to armed
      
        mySerial.begin(9600);                                                   //Module baude rate, this is on max, it depends on the version
        Serial.begin(9600);   
        delay(1000);                     
     }

void loop()
{ 
  digitalWrite(ledPin1, !digitalRead(7));   // Switches LED on if system is armed
  digitalWrite(ledPin2, !digitalRead(8));   // Switches LED on if motion is detected
  
  button_State = digitalRead(button1);      //We are constantly reading the button State

            if (button_State == HIGH && digitalRead(7) == true) { //Motion is detected & system armed
              Serial.println("Bew.Melder ausgelöst");             //Shows this message on the serial monitor
              delay(500);                                         //Small delay to avoid detecting the button press many times
  Serial.println("Sending SMS...");                               //Show this message on serial monitor
  mySerial.print("AT+CMGF=1\r");                                  //Set the module to SMS mode
  delay(100);
  mySerial.print("AT+CMGS=\"+49xxxxxxxxx\"\r"); //Your phone number don't forget to include your country code, example +212123456789"
  delay(500);
  mySerial.print("Bew.Melder ausgelöst");         //This is the text to send to the phone number, don't make it too long or you have to modify the SoftwareSerial buffer
  delay(500);
  mySerial.print((char)26);                       //End AT command with a ^Z, ASCII code 26
  delay(500);
  mySerial.println();
  Serial.println("Text Sent.");
  delay(500);
            }
            if (button_State == LOW)
            delay(100);
}
void pin2_ISR() {
            
      if (InterruptPin2 && digitalRead(7) == true) {    //Bilge switch is detected & system armed      
              Serial.println("Bilgenalarm");            //Shows this message on the serial monitor
              delay(200);                               //Small delay to avoid detecting the button press many times
  Serial.println("Sending SMS...");                     //Show this message on serial monitor
  mySerial.print("AT+CMGF=1\r");                        //Set the module to SMS mode
  delay(100);
  mySerial.print("AT+CMGS=\"++49xxxxxxxxx\"\r");      //Your phone number don't forget to include your country code, example +212123456789"
  delay(500);
  mySerial.print("Bilgenalarm");                        //This is the text to send to the phone number, don't make it too long or you have to modify the SoftwareSerial buffer
  delay(500);
  mySerial.print((char)26);                             //End AT command with a ^Z, ASCII code 26
  delay(500);
  mySerial.println();
  Serial.println("Text Sent.");
  delay(500);
            }
}

void pin3_ISR() {
         if (InterruptPin3 && digitalRead(7) == true) {   //Engineroom switch is detected & system armed
              Serial.println("Motorraum geöffnet");       //Shows this message on the serial monitor
              delay(200);                                 //Small delay to avoid detecting the button press many times
  Serial.println("Sending SMS...");                       //Show this message on serial monitor
  mySerial.print("AT+CMGF=1\r");                          //Set the module to SMS mode
  delay(100);
  mySerial.print("AT+CMGS=\"++49xxxxxxxxx\"\r");        //Your phone number don't forget to include your country code, example +212123456789"
  delay(500);
  mySerial.print("Klappe Keller offen");                  //This is the text to send to the phone number, don't make it too long or you have to modify the SoftwareSerial buffer
  delay(500);
  mySerial.print((char)26);                               //End AT command with a ^Z, ASCII code 26
  delay(500);
  mySerial.println();
  Serial.println("Text Sent.");
  delay(500);
            }

      }
