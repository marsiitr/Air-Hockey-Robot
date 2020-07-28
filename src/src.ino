int outputA1=2,outputB1=4,counter1=0,aState1,aLastState1,temp1;
long int outputA2=3,outputB2=5,counter2=0,aState2,aLastState2,temp2;
const int ldrPin[4][11]={{22,23,24,25,0,0,0,0,0,0,0},
                         {26,27,28,29,30,0,0,0,0,0,0},
                         {31,32,33,34,35,36,0,0,0,0,0},
                         {37,38,39,40,41,42,43,44,45,46,47}};
 int motorspeed1=9;
 int motordirection1=50;
 int motorspeed2=8;
 int motordirection2=51; 
 double radius=0.8;
double angle1,angle2,dist1=0,dist2=0,cpos=0,ppos=0;
void setup() {
 pinMode (outputA1,INPUT_PULLUP);
 pinMode (outputB1,INPUT_PULLUP);
 attachInterrupt(0,encoder1 , CHANGE) ;  
 pinMode (outputA2,INPUT_PULLUP);
 pinMode (outputB2,INPUT_PULLUP);
 attachInterrupt(1,encoder2 , CHANGE) ;  
 Serial.begin (9600);
   aLastState2 = digitalRead(outputA2);  
    aLastState1= digitalRead(outputA1);   

 pinMode(motorspeed1,OUTPUT);
 pinMode(motorspeed2,OUTPUT);
 pinMode(motordirection1,OUTPUT);
 pinMode(motordirection2,OUTPUT);
 for(int i=0;i<4;i++)
  for(int j=0;j<11;j++)
 pinMode(ldrPin[i][j],INPUT);
}

void loop() {
 if( temp1 != counter1)
{
temp1 = counter1; 
Serial.println(counter1);
}
 if( temp2 != counter2)
{
temp2 = counter2; 
Serial.println(counter2);   
//we have numbered each LDR and measured its distances from the origin which is a longitudinal centreline like a 1D numberline.
//All the measurements are in cm.                              
}
   angle1=((2*PI)/1200)*counter1;
   angle2=((2*PI)/1200)*counter2;  
   dist1=radius*angle1;
   ppos=dist1;
      dist2=radius*angle2; 
  for(int i=0; i<4 ; i++)
   for(int j=0; j<11; j++) 
  {
    int ldrstatus=digitalRead(ldrPin[i][j]);
    if((ldrstatus==LOW)&&(i<3))
    {
     if (i=0,j=0)
      movemotor(1,-21.75,0.0);
     if (i=0,j=1)
      movemotor(1,-7.25,0.0);
     if (i=0,j=2)
      movemotor(1,7.25,0.0);
     if (i=0,j=3)
      movemotor(1,21.75,0.0);
     if (i=1,j=0)
      movemotor(1,-29.0,0.0);
     if (i=1,j=1)
      movemotor(1,-14.5,0.0);
     if (i=1,j=2)
      movemotor(1,0.0,0.0);
     if (i=1,j=3)
      movemotor(1,14.5,0.0);
     if (i=1,j=4)
      movemotor(1,29.0,0.0);
     if (i=2,j=0)
      movemotor(1,-36.25,0.0);
     if (i=2,j=1)
      movemotor(1,-21.75,0.0);
     if (i=2,j=2)
      movemotor(1,-7.25,0.0);
     if (i=2,j=3)
      movemotor(1,7.25,0.0);
    if (i=2,j=4)
      movemotor(1,21.75,0.0);
     if (i=2,j=5)
      movemotor(1,36.25,0.0);
    }
    if ((ldrstatus==LOW)&&(i>3))
    {
      if (i=3,j=0)
      movemotor(3,-36.25,16);
     if (i=3,j=1)
      movemotor(3,-29.0,16);
     if (i=3,j=2)
      movemotor(3,-21.75,16);
     if (i=3,j=3)
      movemotor(3,-14.5,16);
     if (i=3,j=4)
      movemotor(3,-7.25,16);
     if (i=3,j=5)
      movemotor(3,0.0,16);
     if (i=3,j=6)
      movemotor(3,7.25,16);
     if (i=3,j=7)
      movemotor(3,14.5,16);
     if (i=3,j=8)
      movemotor(3,21.75,16);
     if (i=3,j=9)
      movemotor(3,29.0,16);
     if (i=3,j=10)
      movemotor(3,36.25,16);
      }
    }
   
}
void movemotor(const int a,double across,double forward)
{ 
  switch (a)  
  {
     case 1: if(across<0)
             digitalWrite(motordirection1,HIGH);
             else 
             digitalWrite(motordirection1,LOW);
             analogWrite(motorspeed1,255);
             if((dist1-ppos)==across)
             analogWrite(motorspeed1,0);
     
     case 2: digitalWrite(motordirection2,HIGH); 
             analogWrite(motorspeed2,255); 
             if (dist2==forward)  
             digitalWrite(motordirection2,LOW);
             if (dist2==0)
             analogWrite(motorspeed2,0);
    
     case 3: if(across<0)
             digitalWrite(motordirection1,HIGH);
             else 
             digitalWrite(motordirection1,LOW);
             analogWrite(motorspeed1,255);
             if((dist1-ppos)==across)
             analogWrite(motorspeed1,0);
             digitalWrite(motordirection2,HIGH); 
             analogWrite(motorspeed2,255); 
             if (dist2==forward)  
             digitalWrite(motordirection2,LOW);
             if (dist2==0)
             analogWrite(motorspeed2,0);
                          
  }
}

  void encoder1()
{
  if(digitalRead(outputA1)==digitalRead(outputB1))
   counter1 ++;
   else
   counter1 --;
  }
   void encoder2()
{
  if(digitalRead(outputA2)==digitalRead(outputB2))
   counter2 ++;
   else
   counter2 --;
  }
