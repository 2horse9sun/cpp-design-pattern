//
// Created by jsjhf on 2023/3/5.
//

#ifndef DECORATORTEMPLATE__OBJECT_H_
#define DECORATORTEMPLATE__OBJECT_H_
#include <iostream>
#include "Base.h"

class Object: public Base{
 public:
  int ObjectMethod();
};

int Object::ObjectMethod() {
  std::cout << "Call ObjectMethod" << std::endl;
  return 0;
}

#endif //DECORATORTEMPLATE__OBJECT_H_
