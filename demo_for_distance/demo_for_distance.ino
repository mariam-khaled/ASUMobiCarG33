char state;
 float linearDist=0;
 String dir1;
  String dir2;// forward or backward distance
 String mode="accurate_driving";
 String submode="Forward30";
 String distance;
 float dist;
 int EN_A=9;
 int EN_B=10;
int IN_1=4; //left motor
int IN_2=5; //left motor
int IN_3=6; //right motor
int IN_4=7; //right motor
int pinA=2; //encoder input pin
int slots = 20; //no of slots of optical encoder(equivalent to PPR)
float wheel = 21; // wheel circumference
volatile unsigned int pulses=0;
int revolutions;
String angleName;
float angle;
int pin = 0;
int Count;
float PulseReq;

void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 pinMode(EN_A,OUTPUT);
 pinMode(EN_B,OUTPUT);
 pinMode(pinA,INPUT);
 attachInterrupt(digitalPinToInterrupt(pinA),counting,RISING);
 Serial.begin(9600);
}

void counting()
{
  pulses++;
 }

void left(int sped)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }

 void right(int sped)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }

  void forward(int sped)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
   void rightforward(int sped)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
   void rightbackward(int sped)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,HIGH);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
  void backward(int sped)
  {
    digitalWrite(IN_1,LOW);
    digitalWrite(IN_2,HIGH);
    digitalWrite(IN_3,LOW);
    digitalWrite(IN_4,HIGH);
    analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }

  void leftforward(int sped)
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
  void leftbackward(int sped)
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  analogWrite(EN_A,sped);
  analogWrite(EN_B,sped);
  }
   void Stop()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  }
  
void loop() {
  forward(60);
  Serial.println(pulses);
  /*while(Serial.available()>0)
  {  
     mode = Serial.read ();
     submode= Serial.read ();*/   
     /*if(mode=="accurate_driving")
     {
         if(submode=="shapes")
          {
              
          }

          else {
            dir1 = submode.substring(0,6);
            dir2 = submode.substring(0,7);
            
            */
           // while(1);
            
             // if (dir1 == "Forward")
              //{
                //forward(40);
}            
              //  distance = submode.substring(7);
            //dist = distance.toFloat();
            //dist=10; 
               //}
              /*else if (dir2 = "Backward")
               {
                 backward(60); 
                 distance = submode.substring(8);
            dist = distance.toFloat();
               }*/
            /*revolutions = pulses/slots;
            linearDist = wheel*revolutions;
              }
              
              
                Stop(); 
            }   
            
            
      
              
     }
     /*else if(mode == "angle")
     {
      angleName = submode.substring(0);
      angle = angleName.toFloat();

      do
      {
        right();
        Count= slots/360;
        PulseReq= angle/Count;
      }
      while(pulses != PulseReq);
     }*/
     
 
      
    
 


