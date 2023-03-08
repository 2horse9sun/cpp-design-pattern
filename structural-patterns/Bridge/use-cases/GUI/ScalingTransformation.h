//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__SCALINGTRANSFORMATION_H_
#define GUI__SCALINGTRANSFORMATION_H_
#include <iostream>
#include <string>
#include "Transformation.h"

class Shape;

class ScalingTransformation: public Transformation{
 public:
  void Transform(Shape* shape);
};

#endif //GUI__SCALINGTRANSFORMATION_H_
