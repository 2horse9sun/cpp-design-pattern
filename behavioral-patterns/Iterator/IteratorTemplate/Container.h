//
// Created by jsjhf on 2023/3/7.
//

#ifndef ITERATORTEMPLATE__CONTAINER_H_
#define ITERATORTEMPLATE__CONTAINER_H_
#include "Iterator.h"

class Container: public Iterator{
 public:
  bool HasNext();
  int Next();
};

#endif //ITERATORTEMPLATE__CONTAINER_H_
