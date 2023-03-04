//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__LINUXBUTTON_H_
#define GUI__LINUXBUTTON_H_

#include <iostream>
#include "Button.h"

class LinuxButton: public Button{
 public:
  int Render();
  int Click();
};

int LinuxButton::Render(){
  printf("Render Linux Button\n");
  return 0;
}

int LinuxButton::Click(){
  printf("Click Linux Button\n");
  return 0;
}

#endif //GUI__LINUXBUTTON_H_
