#include "Prototype.h"
#include <string>

Prototype:: Prototype() {}

Prototype::Prototype(int width, int height) {
  width_ = width;
  height_ = height;
  data_ = new int[width_ * height_];
}

Prototype::Prototype(const Prototype& prototype){
  *this = prototype;
}

Prototype& Prototype::operator=(const Prototype& prototype){
  if(data_ != nullptr){
    delete data_;
  }
  width_ = prototype.width_;
  height_ = prototype.height_;

  // deep copy
  data_ = new int[width_ * height_];
  memcpy(data_, prototype.data_, width_ * height_ * sizeof(int));
  return *this;
}

Prototype::~Prototype(){
  if(data_ != nullptr){
    delete data_;
  }
}

int Prototype::GetWidth(){
  return width_;
}
void Prototype::SetWidth(int width){
  width_ = width;
}
int Prototype::GetHeight(){
  return height_;
}
void Prototype::SetHeight(int height){
  height_ = height;
}