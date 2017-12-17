#ifndef MyLCD_h
#define MyLCD_h

#include "Arduino.h"
#include "LiquidCrystal.h"
#include "MenuItem.h"
#include "MenuFolder.h"

class MyLCD {
    
    private:
        LiquidCrystal LCD;
    public:            
        MyLCD(LiquidCrystal useThis);
        
        void setLCD(LiquidCrystal useThis);
        LiquidCrystal getLCD();
        
};

#endif
