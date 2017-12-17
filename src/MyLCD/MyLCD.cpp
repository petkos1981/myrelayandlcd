#include "Arduino.h"
#include "MyLCD.h"

MyLCD::MyLCD(LiquidCrystal useThis): LCD(useThis)
{    
    
}


void MyLCD::setLCD(LiquidCrystal useThis)
{
    this->LCD = useThis;
}

LiquidCrystal MyLCD::getLCD()
{
    return this->LCD;
{

    
