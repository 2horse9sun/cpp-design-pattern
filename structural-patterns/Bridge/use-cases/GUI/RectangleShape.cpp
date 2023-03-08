//
// Created by jsjhf on 2023/3/8.
//
#include <iostream>
#include "Color.h"
#include "Transformation.h"
#include "RectangleShape.h"

void RectangleShape::SetColor(Color* color){
  color_ = color;
}
void RectangleShape::SetTransformation(Transformation* transformation){
  transformations_.push_back(transformation);
}
void RectangleShape::Render(){
  std::cout << this << " rectangle is rendered" << std::endl;
  color_->RenderColor(this);
  for(Transformation* transformation: transformations_){
    transformation->Transform(this);
  }
}