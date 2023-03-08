//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__SHAPE_H_
#define GUI__SHAPE_H_
#include "Color.h"
#include "Transformation.h"

class Shape {
 public:
  virtual void SetColor(Color* color) = 0;
  virtual void SetTransformation(Transformation* transformation) = 0;
  virtual void Render() = 0;
};

#endif //GUI__SHAPE_H_
