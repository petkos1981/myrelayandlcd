#include "Arduino.h"
#include "MenuObject.h"

MenuObject::MenuObject()
{
    this->setName("?!NameNotSet!?");
    this->bFolder = false;
}


MenuObject::MenuObject(String objectName)
{
    this->setName(objectName);
    this->bFolder = false;
}

void MenuObject::setName(String n)
{
    this->objectName = n;
}

String MenuObject::getName()
{
    return this->objectName;
}

void MenuObject::setMenuText(String n)
{
    this->menuText = n;
}

String MenuObject::getMenuText()
{
    return this->menuText;
}

bool MenuObject::isFolder()
{
    return this->bFolder;
}

void MenuObject::setCallback(ObjectCallbackFunc myCallbackfunction)
{
    this->callbackFunc = myCallbackfunction;
}
