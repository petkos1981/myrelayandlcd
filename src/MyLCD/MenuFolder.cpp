#include "Arduino.h"
#include "MenuFolder.h"
#include "MenuItem.h"

MenuFolder::MenuFolder(String objectName, int kidCount) : MenuObject(objectName)
{
    this->bFolder = true;    
    this->bRoot = true;
    this->kids = new MenuObject[kidCount];
    this->kidCounter = 0;
}

void MenuFolder::setParent(MenuFolder *folder)
{
    this->myParent = folder;
    this->bRoot = false;
}

bool MenuFolder::isRoot()
{
    return this->bRoot;
}

void MenuFolder::addKid(MenuObject menuObject)
{   
    if (this->kidCounter < this->size()) {
        this->kids[this->kidCounter] = menuObject;
        this->kidCounter++;
    }
}

int MenuFolder::size()
{
    return (sizeof(this->kids)/sizeof(*this->kids));
}

MenuObject MenuFolder::getKid(int index)
{
    return this->kids[index];
}
