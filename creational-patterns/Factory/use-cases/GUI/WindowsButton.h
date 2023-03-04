//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__WINDOWSBUTTON_H_
#define GUI__WINDOWSBUTTON_H_
#include <iostream>
#include "Button.h"

class WindowsButton: public Button{
 public:
  int Render();
  int Click();
};

int WindowsButton::Render(){
  printf("Render Windows Button\n");
  return 0;
}

int WindowsButton::Click(){
  printf("Click Windows Button\n");
  return 0;
}

#endif //GUI__WINDOWSBUTTON_H_
