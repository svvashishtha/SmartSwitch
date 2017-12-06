/*

*/
char junk;
String inputString="";

#define pin1 A0
#define pin2 A1
#define pin3 A2
#define pin4 A3


void setup() {
    Serial.begin(19200);            
    pinMode(pin4, OUTPUT);
    pinMode(pin3,OUTPUT);
    pinMode(pin2,OUTPUT);
    pinMode(pin1, OUTPUT);
}

void loop() {
     if(Serial.available()){
  while(Serial.available())
    {
      char inChar = (char)Serial.read(); //read the input
      inputString += inChar;        //make a string of the characters coming on serial
    }
    Serial.println(inputString);
    while (Serial.available() > 0)  
    { junk = Serial.read() ; }      // clear the serial buffer
    if(inputString == "a"){         //in case of 'a' turn the LED on
      digitalWrite(pin4, HIGH);  
    }else if(inputString == "b"){   //incase of 'b' turn the LED off
      digitalWrite(pin4, LOW);
    }
    if(inputString == "c"){
      Serial.println(inputString);//in case of 'c' turn the LED on
      digitalWrite(pin3, HIGH);  
    }else if(inputString == "d"){   //incase of 'd' turn the LED off
      digitalWrite(pin3, LOW);
    }
    if(inputString == "e"){         //in case of 'e' turn the LED on
      digitalWrite(pin2, HIGH);  
    }else if(inputString == "f"){   //incase of 'f' turn the LED off
      digitalWrite(pin2, LOW);
    }
    if(inputString == "g"){         //in case of 'g' turn the LED on
      digitalWrite(pin1, HIGH);  
    }else if(inputString == "h"){   //incase of 'h' turn the LED off
      digitalWrite(pin1, LOW);
    }
    inputString = "";
  }

}

