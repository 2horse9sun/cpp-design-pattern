//
// Created by jsjhf on 2023/3/8.
//

#ifndef GUI__TRANSFORMATION_H_
#define GUI__TRANSFORMATION_H_

class Shape;

class Transformation {
 public:
  virtual void Transform(Shape* shape) = 0;
};

#endif //GUI__TRANSFORMATION_H_
