#include "Arduino.h"
#include "OneRelay.h"

OneRelay::OneRelay() {
	this->setName("- - -");
	this->setPin(-1);	
}

OneRelay::OneRelay(String cname, int i) {
	this->setName(cname);
	this->setPin(i);
	pinMode(this->pin, OUTPUT);
	this->setRelay(false);
}

void OneRelay::setName(String cname) {
	this->relayName = cname;
}

String OneRelay::getName() {
	return this->relayName;
}

void OneRelay::setPin(int i) {
	this->pin = i;
}

int OneRelay::getPin() {
	return this->pin;
}

void OneRelay::set(bool b) {
	this->setRelay(b);
}

void OneRelay::on() {
	this->setRelay(true);
}

void OneRelay::off() {
	this->setRelay(false);
}

bool OneRelay::is() {
	return this->relayON;
}

void OneRelay::setRelay(bool b) {
	if (b) {
		digitalWrite(this->pin, LOW);
		this->relayON = true;
	}
	else {
		digitalWrite(this->pin, HIGH);
		this->relayON = false;
	}
}