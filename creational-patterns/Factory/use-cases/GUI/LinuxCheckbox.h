//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__LINUXCHECKBOX_H_
#define GUI__LINUXCHECKBOX_H_

#include <iostream>
#include "Checkbox.h"

class LinuxCheckbox: public Checkbox{
 public:
  int Render();
  int Click();
};

int LinuxCheckbox::Render(){
  printf("Render Linux Checkbox\n");
  return 0;
}

int LinuxCheckbox::Click(){
  printf("Click Linux Checkbox\n");
  return 0;
}

#endif //GUI__LINUXCHECKBOX_H_
