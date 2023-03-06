//
// Created by jsjhf on 2023/3/6.
//

#include "Subject.h"
#include "Observer.h"

void Subject::SetData(std::string data) {
  data_ = data;
  this->NotifyObservers();
}

void Subject::RegisterObserver(Observer* observer) {
  observers_.push_back(observer);
}

void Subject::NotifyObservers() {
  for(Observer* observer: observers_){
    observer->Update();
  }
}
