#include <Servo.h>
Servo palec1;
Servo palec2;
Servo palec3;
Servo palec4;  // create servo object to control a servo
Servo palec5;

// twelve servo objects can be created on most boards

int sp1 = 90;
void setup() {
  palec1.attach(10);
  
  palec2.attach(3);
  palec3.attach(5);
  palec4.attach(6);  // attaches the servo on pin 9 to the servo object
  palec5.attach(11);
  palec1.write(88);
  palec2.write(91);
  palec3.write(91);
  palec4.write(91);
  palec5.write(88);
  Serial.begin(115200);
  Serial.setTimeout(10);
  delay(3000);
}

void close_p5()
{

      palec5.write(68);
      delay(2000);
      palec5.write(88);

}

void open_p5(){
   palec5.write(98);
      delay(1800);
      palec5.write(88);
}

void close_p4()
{

      palec4.write(82);
      delay(3000);
      palec4.write(91);

}

void open_p4(){
   palec4.write(98);
      delay(1800);
      palec4.write(91);
}




void close_p3()
{

      palec3.write(82);
      delay(2500);
      palec3.write(91);

}

void open_p3(){
   palec3.write(98);
      delay(1900);
      palec3.write(91);
}

void close_p2()
{

      palec2.write(68);
      delay(2400);
      palec2.write(88);

}

void open_p2(){
   palec2.write(104);
      delay(1500);
      palec2.write(91);
}



void close_p1()
{

      palec1.write(82);
      delay(3000);
      palec1.write(89);

}

void open_p1(){
   palec1.write(98);
      delay(2000);
      palec1.write(89);
}


int give_speed(int sp)
{
  return (-1*sp) + 90;
}
void loop() {
/*
if (Serial.available())
  { char cmd = Serial.read();
   if(cmd =='O') 
   {Serial.println("otworz");
   open_p2();}
   
   if(cmd =='C') 
   {
    Serial.println("zamknij");
   close_p2();}
   
       Serial.flush();   }
  
  */
  close_p1();
  close_p2();
  close_p3();
  close_p4();
  close_p5();
  open_p5();
  open_p4();
  open_p3();
  open_p2();
  open_p1();
  delay(1000);
  }
