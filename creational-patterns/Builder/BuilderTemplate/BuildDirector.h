//
// Created by jsjhf on 2023/3/7.
//

#ifndef BUILDERTEMPLATE__BUILDDIRECTOR_H_
#define BUILDERTEMPLATE__BUILDDIRECTOR_H_
#include "Director.h"
#include "Builder.h"
#include "Object.h"

class BuildDirector {
 private:
  Builder builder_;
 public:
  Object& GetObject(){
    builder_.SetAttribute1(1);
    builder_.SetAttribute2(2);
    builder_.SetAttribute3(3);
    return builder_.GetObject();
  }
};

#endif //BUILDERTEMPLATE__BUILDDIRECTOR_H_
