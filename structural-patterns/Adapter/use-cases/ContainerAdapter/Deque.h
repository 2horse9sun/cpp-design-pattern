//
// Created by jsjhf on 2023/3/7.
//

#ifndef CONTAINERADAPTER__DEQUE_H_
#define CONTAINERADAPTER__DEQUE_H_
#include <deque>

class Deque {
 private:
  std::deque<int> dq;
 public:
  void PushFront(int value){
    dq.push_front(value);
  }
  void PushBack(int value){
    dq.push_back(value);
  }
  int PopFront(){
    int value = dq.front();
    dq.pop_front();
    return value;
  }
  int PopBack(){
    int value = dq.back();
    dq.pop_back();
    return value;
  }
};

#endif //CONTAINERADAPTER__DEQUE_H_
