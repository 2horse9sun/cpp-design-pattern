//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__WINDOWSGUIFACTORY_H_
#define GUI__WINDOWSGUIFACTORY_H_
#include "GUIFactory.h"
#include "Button.h"
#include "Checkbox.h"
#include "WindowsButton.h"
#include "WindowsCheckbox.h"

class WindowsGUIFactory: public GUIFactory{
 public:
  Button* CreateButton();
  Checkbox* CreateCheckbox();
};

Button* WindowsGUIFactory::CreateButton(){
  return new WindowsButton();
}

Checkbox* WindowsGUIFactory::CreateCheckbox(){
  return new WindowsCheckbox();
}

#endif //GUI__WINDOWSGUIFACTORY_H_
