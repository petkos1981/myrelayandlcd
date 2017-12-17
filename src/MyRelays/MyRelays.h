#ifndef MyRelays_h
#define MyRelays_h

#include "Arduino.h"
#include "OneRelay.h"

class MyRelays {

	private:
		OneRelay relays[4];
		String cname;
		int addCount;
		int relayNumber;

	public:
		MyRelays();
		MyRelays(int count);
		OneRelay getRelay(int index);
		void setRelay(int index, OneRelay relay);
		void addRelay(OneRelay relay);
		int getCount();
};

#endif