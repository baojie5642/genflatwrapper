//this is gen file,logic controler 

#include "LoginTestController.h"
LoginTestController*LoginTestController::controller=new LoginTestController;

/**
���������ݷַ�    �������Է���������
 */
void LoginTestController::dispatcherMessage(char *data) {

   auto logintestresponse=getRoot<LoginTestResponse>(data);
  //TODO::�������Է���������LoginTestResponse

}