#include "Arduino.h"
#include "MyRelays.h"

MyRelays::MyRelays() {	
	this->addCount = 0;
	this->relayNumber = 4;
}

MyRelays::MyRelays(int i) {
	this->relayNumber = i;
}

void MyRelays::setRelay(int index, OneRelay relay){
	 if (index < 4) this->relays[index] = relay;
}

OneRelay MyRelays::getRelay(int index) {
	return this->relays[index];
}

void MyRelays::addRelay(OneRelay relay) {
	if (addCount < this->relayNumber) {
		this->setRelay(this->addCount, relay);
		this->addCount++;
	}
}

int MyRelays::getCount() {
	return this->relayNumber;
}