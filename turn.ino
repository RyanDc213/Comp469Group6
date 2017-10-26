// left turn
#include <Servo.h>

Servo ST0, ST1; //ST0==motor 0 ST1==Motor 1
int loopCount=0;


void setup()
{  
  Serial.begin(57600);//Initialize the serial port
  
  ST0.attach( 9, 1000, 2000);    
  ST1.attach(10, 1000, 2000);
  
}
  
void loop()
{
  if(loopCount== 0){
    Forward();
  } 
  if(loopCount== 1){
    Left90();
  }
  if(loopCount== 2){
    Right90();
  }
  ST0.write(82);
  ST1.write(82);
  loopCount++;
}
  
void Left90()
{
  Serial.print("left");
  ST0.write(98);
  ST1.write(65);
 delay(2120);
}

void Right90()
{
  Serial.print("right");
  ST0.write(65);
  ST1.write(98);
 delay(2120);
}

void Forward()
{
  Serial.print("Forward");
  ST0.write(60);
  ST1.write(60);
 delay(1800);
}



void left45()
{
  Serial.print("left45");
  ST0.write(60);
  ST1.write(60);
 delay(1800); 
  
  }

void right45()
{
   Serial.print("right45");
  ST0.write(60);
  ST1.write(60);
 delay(1800);
  
  }


void Forward()
{
   Serial.print("Forward");
  ST0.write(60);
  ST1.write(60);
 delay(1800);
  
  }
