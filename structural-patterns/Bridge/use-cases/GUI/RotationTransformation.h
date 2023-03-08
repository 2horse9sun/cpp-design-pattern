//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__ROTATIONTRANSFORMATION_H_
#define GUI__ROTATIONTRANSFORMATION_H_
#include <iostream>
#include <string>
#include "Transformation.h"

class Shapel;

class RotationTransformation: public Transformation{
 public:
  void Transform(Shape* shape);
};

#endif //GUI__ROTATIONTRANSFORMATION_H_
