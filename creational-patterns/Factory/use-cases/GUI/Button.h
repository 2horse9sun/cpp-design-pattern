//
// Created by jsjhf on 2023/3/4.
//

#ifndef GUI__BUTTON_H_
#define GUI__BUTTON_H_

class Button {
 public:
  virtual int Render() = 0;
  virtual int Click() = 0;
};

#endif //GUI__BUTTON_H_
