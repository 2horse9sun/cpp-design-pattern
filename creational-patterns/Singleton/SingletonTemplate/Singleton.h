//
// Created by jsjhf on 2023/2/20.
//

#ifndef SINGLETONTEMPLATE__SINGLETON_H_
#define SINGLETONTEMPLATE__SINGLETON_H_

#include <mutex>

class SingletonEager {
 private:
  static SingletonEager* singleton_eager_;
 public:
//  a global point of access to the single instance
  static SingletonEager* GetInstance();

 private:
//  Make the constructor of the class private to prevent other classes from instantiating it directly.
  SingletonEager();
//  Make the copy constructor of the class private to prevent other classes from
//  copying the initialized singleton to a new singleton.
  SingletonEager(const SingletonEager& singleton_eager){}
//  Make the assignment operator of the class private to prevent other classes from
//  assigning the initialized singleton to a new singleton.
  SingletonEager& operator=(const SingletonEager& singleton_eager){}

};



class SingletonLazy {
 private:
  static SingletonLazy* singleton_lazy_;
 public:
  static SingletonLazy* GetInstance();

 private:
  SingletonLazy();
  SingletonLazy(const SingletonLazy& singleton_lazy){}
  SingletonLazy& operator=(const SingletonLazy& singleton_lazy){}

};



class SingletonThreadSafe {
 private:
  static SingletonThreadSafe* volatile singleton_thread_safe_;
  static std::mutex mtx;
 public:
  static SingletonThreadSafe* volatile GetInstance();

 private:
  SingletonThreadSafe();
  SingletonThreadSafe(const SingletonThreadSafe& singleton_thread_safe){}
  SingletonThreadSafe& operator=(const SingletonThreadSafe& singleton_thread_safe){}

};

#endif //SINGLETONTEMPLATE__SINGLETON_H_
