//
// Created by jsjhf on 2023/3/4.
//

#ifndef FACTORYTEMPLATE__CONCRETEFACTORY_H_
#define FACTORYTEMPLATE__CONCRETEFACTORY_H_
#include "AbstractFactory.h"
#include "AbstractItem.h"
#include "Item.h"

class ConcreteFactory: public AbstractFactory{
 public:
  AbstractItem* CreateItem();
};

AbstractItem* ConcreteFactory::CreateItem() {
  return new Item();
}

#endif //FACTORYTEMPLATE__CONCRETEFACTORY_H_
