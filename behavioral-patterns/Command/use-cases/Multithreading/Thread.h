//
// Created by jsjhf on 2023/5/20.
//

#ifndef MULTITHREADING__THREAD_H_
#define MULTITHREADING__THREAD_H_

#include "Runnable.h"
#include <thread>

class Thread{
 public:
  static void func(Runnable* runnable)
  {
    runnable->Run();
  }

  Thread(Runnable* runnable): t_(std::thread()), runnable_(runnable) {}
  void Start()
  {
    t_ = std::thread(func, runnable_);
    t_.join();
  }

 private:
  std::thread t_;
  Runnable* runnable_;
};

#endif //MULTITHREADING__THREAD_H_
