//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__BLUECOLOR_H_
#define GUI__BLUECOLOR_H_
#include <iostream>
#include <string>
#include "Color.h"

class Shape;

class BlueColor: public Color{
 public:
  void RenderColor(Shape* shape);
};

#endif //GUI__BLUECOLOR_H_
