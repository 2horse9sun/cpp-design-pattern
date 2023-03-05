#include <iostream>
#include "Object.h"
#include "Base.h"
#include "ObjectProxy.h"

int main() {
//  Base* object = new Object();
  Base* object = new ObjectProxy();
  object->ObjectMethod();
  return 0;
}
