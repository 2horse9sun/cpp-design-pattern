//
// Created by jsjhf on 2023/3/6.
//

#ifndef OBSERVERTEMPLATE__OBSERVER_H_
#define OBSERVERTEMPLATE__OBSERVER_H_

class Subject;

class Observer {
 private:
  Subject* subject_ = nullptr;
 public:
  Observer(Subject* subject);
  void Update();
};

#endif //OBSERVERTEMPLATE__OBSERVER_H_
