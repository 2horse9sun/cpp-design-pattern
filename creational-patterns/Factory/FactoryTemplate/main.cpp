#include <iostream>
#include "AbstractFactory.h"
#include "AbstractItem.h"
#include "ConcreteFactory.h"

int main() {
  AbstractFactory* factory = new ConcreteFactory();
  AbstractItem* item = factory->CreateItem();
  item->ItemMethod();
  delete item;
  delete factory;
  return 0;
}
