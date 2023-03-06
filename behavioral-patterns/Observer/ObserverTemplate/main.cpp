#include <iostream>
#include "Subject.h"
#include "Observer.h"

int main() {
  Subject subject = Subject();
  Observer observer1 = Observer(&subject);
  Observer observer2 = Observer(&subject);
  Observer observer3 = Observer(&subject);
  subject.SetData("set data");
  return 0;
}
