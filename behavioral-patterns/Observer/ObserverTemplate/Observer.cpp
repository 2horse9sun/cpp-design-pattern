//
// Created by jsjhf on 2023/3/6.
//
#include <iostream>
#include "Observer.h"
#include "Subject.h"

Observer::Observer(Subject *subject) {
  subject_ = subject;
  subject_->RegisterObserver(this);
}

void Observer::Update() {
  std::cout << "Observer Updated" << std::endl;
}
