//
// Created by jsjhf on 2023/3/5.
//

#ifndef TEXTFORMATTING__WINDOWSTEXT_H_
#define TEXTFORMATTING__WINDOWSTEXT_H_
#include <iostream>
#include <string>
#include "Text.h"

class WindowsText: public Text{
 private:
  std::string text_content_;
 public:
  WindowsText(std::string text_content);
  int Render();
};

WindowsText::WindowsText(std::string text_content) {
  text_content_ = text_content;
}

int WindowsText::Render() {
  std::cout << text_content_ << std::endl;
  return 0;
}

#endif //TEXTFORMATTING__WINDOWSTEXT_H_
