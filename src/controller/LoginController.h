//this is gen file,don't modify it 
#ifndef LoginController_h
#define LoginController_h
#include "IController.h"
class LoginController:public IController{
public:
static LoginController *controller;
public:
/**
���������ݷַ�    �������Է���������
*/
virtual void dispatcherMessage(char *data);
};
#endif //LoginController_h