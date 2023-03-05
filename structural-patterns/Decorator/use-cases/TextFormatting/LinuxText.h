//
// Created by jsjhf on 2023/3/5.
//

#ifndef TEXTFORMATTING__LINUXTEXT_H_
#define TEXTFORMATTING__LINUXTEXT_H_

#include <iostream>
#include <string>
#include "Text.h"

class LinuxText: public Text{
 private:
  std::string text_content_;
 public:
  LinuxText(std::string text_content);
  int Render();
};

LinuxText::LinuxText(std::string text_content) {
  text_content_ = text_content;
}

int LinuxText::Render() {
  std::cout << text_content_ << std::endl;
  return 0;
}

#endif //TEXTFORMATTING__LINUXTEXT_H_
