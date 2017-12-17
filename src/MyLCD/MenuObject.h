#ifndef MenuObject_h
#define MenuObject_h

#include "Arduino.h"

typedef void (*ObjectCallbackFunc)(String commandMessage, int commandInteger);

class MenuObject {
    protected:
        String objectName;
        String menuText;
        bool bFolder;
        ObjectCallbackFunc callbackFunc;
        void setName(String n);
    public:
        MenuObject();
        MenuObject(String objectName);
        String getName();
        
        void setMenuText(String n);
        String getMenuText();
        void setCallback(ObjectCallbackFunc myCallbackfunction);
        bool isFolder();
};

#endif
