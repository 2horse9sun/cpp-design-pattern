//
// Created by jsjhf on 2023/3/5.
//

#ifndef TEXTFORMATTING__ITALICTEXTDECORATOR_H_
#define TEXTFORMATTING__ITALICTEXTDECORATOR_H_
#include <iostream>
#include <string>
#include "Text.h"

class ItalicTextDecorator: public Text{
 private:
  Text* text_object_ = nullptr;
 public:
  ItalicTextDecorator(Text* text_object);
  int Render();
};

ItalicTextDecorator::ItalicTextDecorator(Text* text_object) {
  text_object_ = text_object;
}

int ItalicTextDecorator::Render() {
  std::cout << "Italic ";
  text_object_->Render();
  return 0;
}

#endif //TEXTFORMATTING__ITALICTEXTDECORATOR_H_
