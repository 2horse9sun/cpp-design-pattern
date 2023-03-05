//
// Created by jsjhf on 2023/3/5.
//

#ifndef PROXYTEMPLATE__OBJECTPROXY_H_
#define PROXYTEMPLATE__OBJECTPROXY_H_
#include <iostream>
#include "Base.h"
#include "Object.h"

class ObjectProxy: public Base{
 private:
  // wrapper the original object
  Object object_;
 public:
  ObjectProxy();
  int ObjectMethod();
};

ObjectProxy::ObjectProxy() {
  object_ = Object();
}

int ObjectProxy::ObjectMethod() {
  std::cout << "ObjectProxy adds additional functionality here!" << std::endl;
  object_.ObjectMethod();
  return 0;
}

#endif //PROXYTEMPLATE__OBJECTPROXY_H_
