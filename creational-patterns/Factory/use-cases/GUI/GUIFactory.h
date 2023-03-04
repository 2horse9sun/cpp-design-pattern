//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__GUIFACTORY_H_
#define GUI__GUIFACTORY_H_
#include "Button.h"
#include "Checkbox.h"

class GUIFactory {
 public:
  virtual Button* CreateButton() = 0;
  virtual Checkbox* CreateCheckbox() = 0;
};

#endif //GUI__GUIFACTORY_H_
