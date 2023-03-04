//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__MACGUIFACTORY_H_
#define GUI__MACGUIFACTORY_H_
#include "GUIFactory.h"
#include "Button.h"
#include "Checkbox.h"
#include "MacButton.h"
#include "MacCheckbox.h"

class MacGUIFactory: public GUIFactory{
 public:
  Button* CreateButton();
  Checkbox* CreateCheckbox();
};

Button* MacGUIFactory::CreateButton(){
  return new MacButton();
}

Checkbox* MacGUIFactory::CreateCheckbox(){
  return new MacCheckbox();
}

#endif //GUI__MACGUIFACTORY_H_
