//
// Created by jsjhf on 2023/3/6.
//

#ifndef MVC__VIEW_H_
#define MVC__VIEW_H_

class Model;

class View {
 private:
  Model* model_ = nullptr;
 public:
  View(Model* model);
  int Render();
  void Update();
};

#endif //MVC__VIEW_H_
