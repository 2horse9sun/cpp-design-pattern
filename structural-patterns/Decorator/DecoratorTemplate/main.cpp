#include <iostream>
#include "Base.h"
#include "Object.h"
#include "Decorator.h"

int main() {
  Base* object = new Object();
  Base* decorated_object = new Decorator(object);
  decorated_object->ObjectMethod();
  return 0;
}
