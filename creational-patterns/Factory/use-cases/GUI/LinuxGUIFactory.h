//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__LINUXGUIFACTORY_H_
#define GUI__LINUXGUIFACTORY_H_
#include "GUIFactory.h"
#include "Button.h"
#include "Checkbox.h"
#include "LinuxButton.h"
#include "LinuxCheckbox.h"

class LinuxGUIFactory: public GUIFactory{
 public:
  Button* CreateButton();
  Checkbox* CreateCheckbox();
};

Button* LinuxGUIFactory::CreateButton(){
  return new LinuxButton();
}

Checkbox* LinuxGUIFactory::CreateCheckbox(){
  return new LinuxCheckbox();
}

#endif //GUI__LINUXGUIFACTORY_H_
