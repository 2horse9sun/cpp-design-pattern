#include <iostream>
#include "GUIFactory.h"
#include "WindowsGUIFactory.h"
#include "LinuxGUIFactory.h"
#include "MacGUIFactory.h"
#include "Button.h"
#include "Checkbox.h"

int main() {

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
  GUIFactory* factory = new WindowsGUIFactory();
#elif __APPLE__
  GUIFactory* factory = new MacGUIFactory();
#elif __linux__
  GUIFactory* factory = new LinuxGUIFactory();
#else
# error "Unknown compiler"
#endif

  Button* button = factory->CreateButton();
  Checkbox* checkbox = factory->CreateCheckbox();
  button->Render();
  checkbox->Render();
  button->Click();
  checkbox->Click();

  delete button;
  delete checkbox;
  delete factory;
  return 0;
}
