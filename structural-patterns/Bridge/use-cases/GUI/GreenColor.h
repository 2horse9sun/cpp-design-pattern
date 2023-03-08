//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__GREENCOLOR_H_
#define GUI__GREENCOLOR_H_
#include <iostream>
#include <string>
#include "Color.h"

class Shape;

class GreenColor: public Color {
 public:
  void RenderColor(Shape* shape);
};

#endif //GUI__GREENCOLOR_H_
