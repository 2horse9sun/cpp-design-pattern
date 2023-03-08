//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__COLOR_H_
#define GUI__COLOR_H_

class Shape;

class Color {
 public:
  virtual void RenderColor(Shape* shape) = 0;
};

#endif //GUI__COLOR_H_
