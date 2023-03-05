//
// Created by jsjhf on 2023/3/5.
//

#ifndef TEXTFORMATTING__BOLDTEXTDECORATOR_H_
#define TEXTFORMATTING__BOLDTEXTDECORATOR_H_
#include <iostream>
#include <string>
#include "Text.h"

class BoldTextDecorator: public Text{
 private:
  Text* text_object_ = nullptr;
 public:
  BoldTextDecorator(Text* text_object);
  int Render();
};

BoldTextDecorator::BoldTextDecorator(Text* text_object) {
  text_object_ = text_object;
}

int BoldTextDecorator::Render() {
  std::cout << "Bold ";
  text_object_->Render();
  return 0;
}

#endif //TEXTFORMATTING__BOLDTEXTDECORATOR_H_
