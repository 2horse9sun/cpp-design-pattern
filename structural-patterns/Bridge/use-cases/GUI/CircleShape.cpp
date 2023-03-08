//
// Created by jsjhf on 2023/3/8.
//
#include <iostream>
#include "Color.h"
#include "Transformation.h"
#include "CircleShape.h"

void CircleShape::SetColor(Color* color){
  color_ = color;
}
void CircleShape::SetTransformation(Transformation* transformation){
  transformations_.push_back(transformation);
}
void CircleShape::Render(){
  std::cout << this << " circle is rendered" << std::endl;
  color_->RenderColor(this);
  for(Transformation* transformation: transformations_){
    transformation->Transform(this);
  }
}