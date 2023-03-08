//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__RECTANGLESHAPE_H_
#define GUI__RECTANGLESHAPE_H_
#include <iostream>
#include <string>
#include "vector"
#include "Shape.h"
#include "Color.h"
#include "Transformation.h"

class RectangleShape: public Shape{
 private:
  Color* color_ = nullptr;
  std::vector<Transformation*> transformations_;
 public:
  void SetColor(Color* color);
  void SetTransformation(Transformation* transformation);
  void Render();
};

#endif //GUI__RECTANGLESHAPE_H_
