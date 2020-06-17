#define ENA 2
#define ENB 3
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11 

unsigned char carSpeed = 190;   //Initializing LED Pin
int led_pin = 13;

void setup(){
  pinMode(IN1,OUTPUT);    //before useing io pin, pin mode must be set first 
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(ENB,OUTPUT);
  pinMode(led_pin, OUTPUT);

  

  Serial.begin(9600);
   // put your setup code here, to run once:

}

char cha;  // variable to read data
void loop(){
  if(Serial.available()>0)
  {
    cha=Serial.read();
//    Serial.write(cha);
    delay(2);
    /// up button
    if(cha=='F'){
      analogWrite(ENA,carSpeed);
      analogWrite(ENB,carSpeed);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
      Serial.println("Forward");
    
}
    }
    /// down button
    if(cha=='B'){
      analogWrite(ENA,carSpeed);
      analogWrite(ENB,carSpeed);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
      Serial.println("Back");
      
    }


    
    ////left 
    if(cha=='L'){
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
      Serial.println("left");

    }


    
    /////right button
      if(cha=='R'){
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
      Serial.println("right");
      
   }

      
    // for stop
    if(cha=='o'){
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
    }
}

      /*/////
  getstr = Serial.read();
  switch(getstr){
    case 'f': forward(); break;
    case 'b': back();   break;
    case 'l': left();   break;
    case 'r': right();  break;
    case 's': stop();   break;
    case 'a': stateChange(); break;
    default:  break;
  }
    }
void stateChange(){
  state = !state;
  digitalWrite(LED, state);
  Serial.println("Light");  
}
    }
//Initializing LED Pin

void setup() {
  //Declaring LED pin as output
  pinMode(ENB, OUTPUT);
}
void loop() {
  //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(ENB, i);
    delay(5);
  }
  for(int i=255; i>0; i--){
    analogWrite(ENB, i);
    delay(5);
  }
}*/



  
