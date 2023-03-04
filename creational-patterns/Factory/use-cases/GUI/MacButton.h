//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__MACBUTTON_H_
#define GUI__MACBUTTON_H_

#include <iostream>
#include "Button.h"

class MacButton: public Button{
 public:
  int Render();
  int Click();
};

int MacButton::Render(){
  printf("Render Mac Button\n");
  return 0;
}

int MacButton::Click(){
  printf("Click Mac Button\n");
  return 0;
}

#endif //GUI__MACBUTTON_H_
