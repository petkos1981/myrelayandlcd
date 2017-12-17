#ifndef OneRelay_h
#define OneRelay_h

#include "Arduino.h"

class OneRelay {

	public:
		OneRelay();
		OneRelay(String cname, int i);
		void setName(String cname);
		String getName();
		
		void setPin(int i);
		int getPin();
		
		void set(bool b);
		
		void on();
		void off();
		bool is();
		
	private:
		String relayName;
		int pin;
		bool relayON;
		void setRelay(bool b);
	
	
};

#endif