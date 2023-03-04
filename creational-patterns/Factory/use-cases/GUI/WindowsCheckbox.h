//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__WINDOWSCHECKBOX_H_
#define GUI__WINDOWSCHECKBOX_H_
#include <iostream>
#include "Checkbox.h"

class WindowsCheckbox: public Checkbox{
 public:
  int Render();
  int Click();
};

int WindowsCheckbox::Render(){
  printf("Render Windows Checkbox\n");
  return 0;
}

int WindowsCheckbox::Click(){
  printf("Click Windows Checkbox\n");
  return 0;
}

#endif //GUI__WINDOWSCHECKBOX_H_
