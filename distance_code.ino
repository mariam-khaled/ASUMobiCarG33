 char state;
 float linearDist;
 char dir;  // forward or backward distance
 String mode;
 String submode;
 String distance;
 float dist = 10;
int IN_1=4; //left motor
int IN_2=5; //left motor
int IN_3=6; //right motor
int IN_4=7; //right motor
int pinA=2; //encoder input pin
unsigned int slots = 20; //no of slots of optical encoder(equivalent to PPR)
float wheel = 21; // wheel circumference
volatile unsigned int pulses=0;
unsigned int revolutions = 0;
void setup() {
 pinMode(IN_1,OUTPUT);
 pinMode(IN_2,OUTPUT);
 pinMode(IN_3,OUTPUT);
 pinMode(IN_4,OUTPUT);
 pinMode(pinA,INPUT);
 attachInterrupt(0,counting,RISING);
 Serial.begin(9600);
}

void counting()
{
  pulses++;
 }

void left()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  }

 void right()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  }

  void forward()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  }
   void rightforward()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  }
   void rightbackward()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,HIGH);
  }
  void backward()
  {
    digitalWrite(IN_1,LOW);
    digitalWrite(IN_2,HIGH);
    digitalWrite(IN_3,LOW);
    digitalWrite(IN_4,HIGH);
  }

  void leftforward()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,HIGH);
  digitalWrite(IN_4,LOW);
  }
  void leftbackward()
{
  digitalWrite(IN_1,HIGH);
  digitalWrite(IN_2,HIGH);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,HIGH);
  }
   void Stop()
{
  digitalWrite(IN_1,LOW);
  digitalWrite(IN_2,LOW);
  digitalWrite(IN_3,LOW);
  digitalWrite(IN_4,LOW);
  }
  
void loop() {
/*  while(Serial.available()>0)
  {  
     mode = Serial.read ();
     submode= Serial.read();   

         if(submode=="shapes")
          {
              //shapes
          }

          else { 
            dir = submode[0];
            distance = submode.substring(1);
            dist = distance.toFloat(); */
            
            while(linearDist != dist)
            {
              if (dir = 'F')
              {
                forward(); 
               }
              else if (dir = 'B')
               {
                 backward(); 
               }
            revolutions = pulses/slots;
            linearDist = wheel*revolutions;
              }
              
          
                Stop(); 
               
            
            }
      
              
     
     
 
      
   // }
 



