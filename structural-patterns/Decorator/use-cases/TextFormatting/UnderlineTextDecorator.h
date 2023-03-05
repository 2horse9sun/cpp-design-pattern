//
// Created by jsjhf on 2023/3/5.
//

#ifndef TEXTFORMATTING__UNDERLINETEXTDECORATOR_H_
#define TEXTFORMATTING__UNDERLINETEXTDECORATOR_H_
#include <iostream>
#include <string>
#include "Text.h"

class UnderlineTextDecorator: public Text{
 private:
  Text* text_object_ = nullptr;
 public:
  UnderlineTextDecorator(Text* text_object);
  int Render();
};

UnderlineTextDecorator::UnderlineTextDecorator(Text* text_object) {
  text_object_ = text_object;
}

int UnderlineTextDecorator::Render() {
  std::cout << "Underlined ";
  text_object_->Render();
  return 0;
}

#endif //TEXTFORMATTING__UNDERLINETEXTDECORATOR_H_
