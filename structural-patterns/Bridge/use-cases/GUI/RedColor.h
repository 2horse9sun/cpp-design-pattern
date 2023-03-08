//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__REDCOLOR_H_
#define GUI__REDCOLOR_H_
#include <iostream>
#include <string>
#include "Color.h"

class Shape;

class RedColor: public Color {
 public:
  void RenderColor(Shape* shape);
};

#endif //GUI__REDCOLOR_H_
