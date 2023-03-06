//
// Created by jsjhf on 2023/3/6.
//

#ifndef OBSERVERTEMPLATE__SUBJECT_H_
#define OBSERVERTEMPLATE__SUBJECT_H_
#include <vector>
#include <string>

class Observer;

class Subject {
 private:
  std::string data_;
  std::vector<Observer*> observers_;
 public:
  void SetData(std::string data);
  void RegisterObserver(Observer* observer);
  void NotifyObservers();
};

#endif //OBSERVERTEMPLATE__SUBJECT_H_
