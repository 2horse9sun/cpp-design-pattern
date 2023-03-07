//
// Created by jsjhf on 2023/3/7.
//

#ifndef BUILDERTEMPLATE__DIRECTOR_H_
#define BUILDERTEMPLATE__DIRECTOR_H_
#include "Object.h"

class Director {
 public:
  virtual Object& GetObject() = 0;
};

#endif //BUILDERTEMPLATE__DIRECTOR_H_
