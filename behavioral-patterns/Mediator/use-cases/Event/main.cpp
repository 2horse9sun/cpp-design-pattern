#include "Event.h"
#include <iostream>

int main() {
  EventMediator mediator;

  ConcreteEventListener listener1;
  ConcreteEventListener listener2;

  mediator.addEventListener(&listener1);
  mediator.addEventListener(&listener2);

  mediator.notify("Event 1");

  mediator.removeEventListener(&listener2);

  mediator.notify("Event 2");
  return 0;
}
