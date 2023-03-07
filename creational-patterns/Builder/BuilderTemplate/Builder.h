//
// Created by jsjhf on 2023/3/7.
//

#ifndef BUILDERTEMPLATE__BUILDER_H_
#define BUILDERTEMPLATE__BUILDER_H_
#include "Object.h"

class Builder {
 private:
  Object object_;
 public:
  void SetAttribute1(int attribute_1){
    object_.attribute_1_ = attribute_1;
  }
  void SetAttribute2(int attribute_2){
    object_.attribute_2_ = attribute_2;
  }
  void SetAttribute3(int attribute_3){
    object_.attribute_3_ = attribute_3;
  }
  Object& GetObject(){
    return object_;
  }
};

#endif //BUILDERTEMPLATE__BUILDER_H_
