//
// Created by jsjhf on 2023/3/6.
//

#ifndef MVC__CONTROLLER_H_
#define MVC__CONTROLLER_H_
#include <string>
#include "Model.h"

class Controller {
 private:
  Model* model_ = nullptr;
 public:
  Controller(Model* model);
  void SetModelData(std::string data);
};

#endif //MVC__CONTROLLER_H_
