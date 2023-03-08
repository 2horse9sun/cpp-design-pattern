//
// Created by jsjhf on 2023/3/8.
//
#include <iostream>
#include "Color.h"
#include "Transformation.h"
#include "TriangleShape.h"

void TriangleShape::SetColor(Color* color){
  color_ = color;
}
void TriangleShape::SetTransformation(Transformation* transformation){
  transformations_.push_back(transformation);
}
void TriangleShape::Render(){
  std::cout << this << " triangle is rendered" << std::endl;
  color_->RenderColor(this);
  for(Transformation* transformation: transformations_){
    transformation->Transform(this);
  }
}