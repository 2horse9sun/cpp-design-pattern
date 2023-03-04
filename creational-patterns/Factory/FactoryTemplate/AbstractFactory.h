//
// Created by jsjhf on 2023/3/4.
//

#ifndef FACTORYTEMPLATE__ABSTRACTFACTORY_H_
#define FACTORYTEMPLATE__ABSTRACTFACTORY_H_
#include "AbstractItem.h"

class AbstractFactory {
 public:
  virtual AbstractItem* CreateItem() = 0;
};

#endif //FACTORYTEMPLATE__ABSTRACTFACTORY_H_
