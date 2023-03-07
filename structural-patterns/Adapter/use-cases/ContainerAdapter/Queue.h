//
// Created by jsjhf on 2023/3/7.
//

#ifndef CONTAINERADAPTER__QUEUE_H_
#define CONTAINERADAPTER__QUEUE_H_
#include "Deque.h"

// Adapter of Deque
class Queue {
 private:
  Deque dq;
 public:
  void Push(int value){
    dq.PushBack(value);
  }
  int Pop(){
    int value = dq.PopFront();
    return value;
  }
};

#endif //CONTAINERADAPTER__QUEUE_H_
