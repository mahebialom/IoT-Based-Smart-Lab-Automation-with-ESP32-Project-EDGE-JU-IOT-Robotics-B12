#include <IRremote.hpp>

#define IR_RECEIVER_PIN      4                               // IR Receiver pin
#define LED_PIN              15  
#define LED_FEEDBACK_PIN 2 
int state=1;                             // ESP32 inboard pin

void setup()
{
    Serial.begin(115200);                                     // Start Serial Monitor
    IrReceiver.begin(IR_RECEIVER_PIN, ENABLE_LED_FEEDBACK);   // Start IR Receiver, Enable IRreceiver led
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, state);
     pinMode(LED_FEEDBACK_PIN, OUTPUT);
}

void loop()
{
    if (IrReceiver.decode())        // Check if there is a received code
    {
       digitalWrite(LED_FEEDBACK_PIN, HIGH);  // Turn LED on for feedback
        delay(40);                            // Visible duration
        digitalWrite(LED_FEEDBACK_PIN, LOW);


        Serial.print("Received Data: ");
        Serial.print(IrReceiver.decodedIRData.decodedRawData, HEX);  // Print Received code on Serial Monitor in Hexadecimal
        Serial.print("  -  Received Command: ");
        Serial.println(IrReceiver.decodedIRData.command, HEX);  // Print Received command on Serial Monitor in Hexadecimal

        if(IrReceiver.decodedIRData.command == 0x12){   
          state=!state;     // if you press a button with command number '0'
          digitalWrite(LED_PIN, state);                       // Turn off the led
        }

        delay(500);
        IrReceiver.resume();       // Enable receiving of the next value
    }
}