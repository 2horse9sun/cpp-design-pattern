//
// Created by jsjhf on 2023/2/20.
//

#include "Singleton.h"
#include <mutex>
//  The instance of the Singleton class is created at the time of class loading, rather than when it is first accessed
SingletonEager* SingletonEager::singleton_eager_ = new SingletonEager();

SingletonEager* SingletonEager::GetInstance() {
  return SingletonEager::singleton_eager_;
}

SingletonEager::SingletonEager() {
  printf("SingletonEager created\n");
}



SingletonLazy* SingletonLazy::singleton_lazy_ = nullptr;

//  The Singleton instance is created only when it is first accessed
SingletonLazy* SingletonLazy::GetInstance() {
  if(SingletonLazy::singleton_lazy_ == nullptr){
    SingletonLazy::singleton_lazy_ = new SingletonLazy();
  }
  return SingletonLazy::singleton_lazy_;
}

SingletonLazy::SingletonLazy() {
  printf("SingletonLazy created\n");
}



std::mutex SingletonThreadSafe::mtx;
SingletonThreadSafe* volatile SingletonThreadSafe::singleton_thread_safe_ = nullptr;

SingletonThreadSafe* volatile SingletonThreadSafe::GetInstance() {
//  Double-checked locking
  if(SingletonThreadSafe::singleton_thread_safe_ == nullptr) {
    mtx.lock();
    if (SingletonThreadSafe::singleton_thread_safe_ == nullptr) {
//      Step 1: Allocate memory for SingletonThreadSafe instance
//      Step 2: Call constructor of SingletonThreadSafe for initialization
//      Step 3: Make singleton_thread_safe_ point to the allocated memory
//      The order of step 2 and 3 may be swapped by compiler optimization => Prevent: use volatile modifier
      SingletonThreadSafe::singleton_thread_safe_ = new SingletonThreadSafe();
    }
    mtx.unlock();
  }
  return SingletonThreadSafe::singleton_thread_safe_;
}

SingletonThreadSafe::SingletonThreadSafe() {
  printf("SingletonThreadSafe created\n");
}