//this is gen file,don't modify it 
#include "IController.h"
#include "LoginController.h"
#include "LoginTestController.h"

map<int, IController *> IController::controller_map;
void IController::dispatcherMessage(char *data) {}
/**
 * ע��controller mapper
 */
void IController::registerMapperController() {
  log("%s", "registerMapperController��ʼע��controller... ...");
  controller_map[LoginResponse::msgID()]=LoginController::controller;
  controller_map[LoginTestResponse::msgID()]=LoginTestController::controller;
}
