//this is gen file,logic controler 

#include "LoginController.h"
LoginController*LoginController::controller=new LoginController;

/**
���������ݷַ�    �������Է���������
 */
void LoginController::dispatcherMessage(char *data) {

   auto loginresponse=getRoot<LoginResponse>(data);
  //TODO::�������Է���������LoginResponse

}