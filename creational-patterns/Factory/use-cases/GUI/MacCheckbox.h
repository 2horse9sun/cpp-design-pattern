//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__MACCHECKBOX_H_
#define GUI__MACCHECKBOX_H_

#include <iostream>
#include "Checkbox.h"

class MacCheckbox: public Checkbox{
 public:
  int Render();
  int Click();
};

int MacCheckbox::Render(){
  printf("Render Mac Checkbox\n");
  return 0;
}

int MacCheckbox::Click(){
  printf("Click Mac Checkbox\n");
  return 0;
}

#endif //GUI__MACCHECKBOX_H_
