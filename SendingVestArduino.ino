#include <Arduino.h>
#include <rf24g.h>
#include <RF24.h>
RF24 radio(43, 45); // CE, CSN
const byte address[6] = "00001";

int button_pin_1 = 2;
int button_pin_2 = 3;
int button_pin_3 = 4;
int button_pin_4 = 8;
int button_pin_5 = 9;
int button_pin_6 = 10;

const int timeout = 10000;       //define timeout of 10 sec
char menuOption = 0;
long time0;

boolean button_state_1 = 0;
boolean button_state_2 = 0;
boolean button_state_3 = 0;
boolean button_state_4 = 0;
boolean button_state_5 = 0;
boolean button_state_6 = 0;

unsigned long Command;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    pinMode(button_pin_1, INPUT);
    pinMode(button_pin_2, INPUT);
    pinMode(button_pin_3, INPUT);
    pinMode(button_pin_4, INPUT);
    pinMode(button_pin_5, INPUT);
    pinMode(button_pin_6, INPUT);

    radio.begin();
    radio.openWritingPipe(address);
    radio.setPALevel(RF24_PA_MIN);
    radio.stopListening(); //sets Arduino as a tranmitter
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state_1 = digitalRead(button_pin_1);
  button_state_2 = digitalRead(button_pin_2);
  button_state_3 = digitalRead(button_pin_3);
  button_state_4 = digitalRead(button_pin_4);
  button_state_5 = digitalRead(button_pin_5);
  button_state_6 = digitalRead(button_pin_6);
  
  if(button_state_1 == HIGH && button_state_2 == HIGH){
    Command = 7;
    const char text7[] = "Buttons 1 & 2 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 1 & 2 pressed");
  }

  else if(button_state_1 == HIGH && button_state_3 == HIGH){
    Command = 8;
    const char text8[] = "Buttons 1 & 3 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 1 & 3 pressed");
  }

  else if(button_state_1 == HIGH && button_state_4 == HIGH){
    Command = 9;
    const char text9[] = "Buttons 1 & 4 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 1 & 4 pressed");
  }

  else if(button_state_1 == HIGH && button_state_5 == HIGH){
    Command = 10;
    const char text10[] = "Buttons 1 & 5 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 1 & 5 pressed");
  }

  else if(button_state_1 == HIGH && button_state_6 == HIGH){
    Command = 11;
    const char text11[] = "Buttons 1 & 6 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 1 & 6 pressed");
  }

  else if(button_state_2 == HIGH && button_state_3 == HIGH){
    Command = 12;
    const char text12[] = "Buttons 2 & 3 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 2 & 3 pressed");
  }

  else if(button_state_2 == HIGH && button_state_4 == HIGH){
    Command = 13;
    const char text13[] = "Buttons 2 & 4 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 2 & 4 pressed");
  }

  else if(button_state_2 == HIGH && button_state_5 == HIGH){
    Command = 14;
    const char text14[] = "Buttons 2 & 5 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 2 & 5 pressed");
  }

  else if(button_state_2 == HIGH && button_state_6 == HIGH){
    Command = 15;
    const char text15[] = "Buttons 2 & 6 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 2 & 6 pressed");
  }

  else if(button_state_3 == HIGH && button_state_4 == HIGH){
    Command = 16;
    const char text16[] = "Buttons 3 & 4 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 3 & 4 pressed");
  }

  else if(button_state_3 == HIGH && button_state_5 == HIGH){
    Command = 17;
    const char text17[] = "Buttons 3 & 5 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 3 & 5 pressed");
  }

  else if(button_state_3 == HIGH && button_state_6 == HIGH){
    Command = 18;
    const char text18[] = "Buttons 3 & 6 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 3 & 6 pressed");
  }  

  else if(button_state_4 == HIGH && button_state_5 == HIGH){
    Command = 19;
    const char text19[] = "Buttons 4 & 5 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 4 & 5 pressed");
  }

  else if(button_state_4 == HIGH && button_state_6 == HIGH){
    Command = 20;
    const char text20[] = "Buttons 4 & 6 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 4 & 6 pressed");
  }

  else if(button_state_5 == HIGH && button_state_6 == HIGH){
    Command = 21;
    const char text21[] = "Buttons 5 & 6 were pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("buttons 5 & 6 pressed");
  }

  else if(button_state_1 == HIGH){
    Command = 1;
    const char text1[] = "Button 1 was pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("button 1 pressed");
  }
  
  else if(button_state_2 == HIGH){
    Command = 2;
    const char text2[] = "Button 2 was pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("button 2 pressed");
  }

  else if(button_state_3 == HIGH){
    Command = 3;
    const char text3[] = "Button 3 was pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("button 3 pressed");
  }

  else if(button_state_4 == HIGH){
    Command = 4;
    const char text4[] = "Button 4 was pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("button 4 pressed");
  }

  else if(button_state_5 == HIGH){
    Command = 5;
    const char text5[] = "Button 5 was pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("button 5 pressed");
  }
  
  else if(button_state_6 == HIGH){
    Command = 6;
    const char text6[] = "Button 6 was pressed";
    radio.write(&Command, sizeof(unsigned long));
    Serial.println("button 6 pressed");
  }
  
  delay(10);
}
