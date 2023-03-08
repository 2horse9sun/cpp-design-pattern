//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__TRANSLATIONTRANSFORMATION_H_
#define GUI__TRANSLATIONTRANSFORMATION_H_
#include <iostream>
#include <string>
#include "Transformation.h"

class Shape;

class TranslationTransformation: public Transformation{
 public:
  void Transform(Shape* shape);
};

#endif //GUI__TRANSLATIONTRANSFORMATION_H_
