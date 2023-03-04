//
// Created by jsjhf on 2023/3/4.
//

#ifndef FACTORYTEMPLATE__ITEM_H_
#define FACTORYTEMPLATE__ITEM_H_
#include <iostream>
#include "AbstractItem.h"

class Item: public AbstractItem {
 public:
  int ItemMethod();
};

int Item::ItemMethod() {
  std::cout << "Item created." << std::endl;
  return 0;
}

#endif //FACTORYTEMPLATE__ITEM_H_
