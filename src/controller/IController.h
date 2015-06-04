//warn this is gen file,don't modify it 
#ifndef _ICONTROLLER_H
#define _ICONTROLLER_H
#include <map>
#include "cocos2d.h"
#include "flatgen/Game_generated.h"
using  namespace cocos2d;
using namespace gen;
using  namespace std;
#ifndef delete_array
#define delete_array(p)     do { if(p) { delete[] (p); (p) = nullptr; } } while(0)
#endif //delete_array
class IController {

public:
  IController() { }
 /**
  ע����ϢID �Ͷ�Ӧ����controller�Ĺ�ϵ
  �Ա��ڿ�����������
  */
  static std::map<int, IController *> controller_map;
  /**
  ���������ݷַ�
  */
  virtual void dispatcherMessage(char *data);
  /**
  ת����Ӧ��ϢΪflatbuffersʵ��
  data+4: ��ϢID ռ��4 �ֽ�
  */
  template <typename  T> const  T* getRoot(char* data);
 /**
  * @Author ʯͷ���, 15-06-01 23:06:26
  *
  * @brief  ע��controoler and mapper
  */
  static void registerMapperController();
};
template<typename T>
inline const T *IController::getRoot(char *data) {
    return flatbuffers::GetRoot<T>(data+4);
}
#endif//_ICONTROLLER_H