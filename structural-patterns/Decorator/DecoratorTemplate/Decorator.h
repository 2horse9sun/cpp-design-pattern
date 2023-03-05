//
// Created by jsjhf on 2023/3/5.
//

#ifndef DECORATORTEMPLATE__DECORATOR_H_
#define DECORATORTEMPLATE__DECORATOR_H_
#include <iostream>
#include "Base.h"

class Decorator: public Base{
 private:
  Base* object_ = nullptr;
 public:
  Decorator(Base* object);
  int ObjectMethod();
};

Decorator::Decorator(Base* object) {
  object_ = object;
}

int Decorator::ObjectMethod() {
  std::cout << "The object has been decorated" << std::endl;
  object_->ObjectMethod();
  return 0;
}

#endif //DECORATORTEMPLATE__DECORATOR_H_
