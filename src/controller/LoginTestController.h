//this is gen file,don't modify it 
#ifndef LoginTestController_h
#define LoginTestController_h
#include "IController.h"
class LoginTestController:public IController{
public:
static LoginTestController *controller;
public:
/**
���������ݷַ�    �������Է���������
*/
virtual void dispatcherMessage(char *data);
};
#endif //LoginTestController_h