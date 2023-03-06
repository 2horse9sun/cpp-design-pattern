//
// Created by jsjhf on 2023/3/6.
//

#ifndef MVC__MODEL_H_
#define MVC__MODEL_H_
#include <string>
#include <vector>

class View;

class Model {
 private:
  std::string data_ = "";
  std::vector<View*> attached_views_;
 public:
  std::string GetData();
  void SetData(std::string data);
  void RegisterView(View* view);
  void UnregisterView(View* view);
  void UpdateViews();
};

#endif //MVC__MODEL_H_
