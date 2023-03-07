//
// Created by jsjhf on 2023/3/7.
//

#ifndef CONTAINERADAPTER__STACK_H_
#define CONTAINERADAPTER__STACK_H_
#include "Deque.h"

// Adapter of Deque
class Stack {
 private:
  Deque dq;
 public:
  void Push(int value){
    dq.PushBack(value);
  }
  int Pop(){
    int value = dq.PopBack();
    return value;
  }
};

#endif //CONTAINERADAPTER__STACK_H_
