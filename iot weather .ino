#include <LiquidCrystal.h>
int sensor = A0;
float temp;
float tempc;
float tempf;

LiquidCrystal lcd (13,12, 11, 5, 4, 3, 2);// position of  connections
void setup () {
lcd.begin (16, 2);//defining columns and rows of lcd
}

void loop () {
temp=analogRead(sensor);//define temp sensor 
tempc=(temp*4.88)/10;
tempf=(tempc*1.8)+32;
lcd.setCursor(0,0);
lcd.print("Temp in C = ");
lcd.println(tempc);
lcd.setCursor(0,1);
lcd.print("Temp in F = ");
lcd.println(tempf);
}