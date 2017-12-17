#ifndef MenuFolder_h
#define MenuFolder_h

#include "Arduino.h"
#include "MenuObject.h"

class MenuFolder : public MenuObject {
    private:
        MenuFolder *myParent;
        MenuObject *kids;
        int kidCounter;
        bool bRoot;
    public:
        MenuFolder(String objectName, int kidCount);
        void FolderCallbackFunction(String *command, int *i);
        void setParent(MenuFolder *folder);
        bool isRoot();
        void addKid(MenuObject menuObject);
        int size();
        MenuObject getKid(int index);
};

#endif
