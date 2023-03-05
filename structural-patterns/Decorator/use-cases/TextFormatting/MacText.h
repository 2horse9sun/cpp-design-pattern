//
// Created by jsjhf on 2023/3/5.
//

#ifndef TEXTFORMATTING__MACTEXT_H_
#define TEXTFORMATTING__MACTEXT_H_

#include <iostream>
#include <string>
#include "Text.h"

class MacText: public Text{
 private:
  std::string text_content_;
 public:
  MacText(std::string text_content);
  int Render();
};

MacText::MacText(std::string text_content) {
  text_content_ = text_content;
}

int MacText::Render() {
  std::cout << text_content_ << std::endl;
  return 0;
}

#endif //TEXTFORMATTING__MACTEXT_H_
