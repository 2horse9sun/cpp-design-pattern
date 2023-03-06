//
// Created by jsjhf on 2023/3/6.
//

#include "Controller.h"

Controller::Controller(Model *model) {
  model_ = model;
}

void Controller::SetModelData(std::string data) {
  model_->SetData(data);
}
