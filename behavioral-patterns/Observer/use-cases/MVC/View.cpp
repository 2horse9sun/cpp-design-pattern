//
// Created by jsjhf on 2023/3/6.
//
#include <iostream>
#include <string>
#include "View.h"
#include "Model.h"

View::View(Model *model) {
  model_ = model;
  model_->RegisterView(this);
}

int View::Render() {
  std::cout << "View " << this << ": " << model_->GetData() << std::endl;
  return 0;
}

void View::Update() {
  this->Render();
}
