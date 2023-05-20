//
// Created by jsjhf on 2023/5/20.
//

#ifndef MULTITHREADING__PRINTTASK_H_
#define MULTITHREADING__PRINTTASK_H_
#include "Runnable.h"
#include <iostream>
#include <string>

class PrintTask: public Runnable{
 public:
  PrintTask(std::string content): content_(content){}

  void Run()
  {
    std::cout << content_ << std::endl;
  }

 private:
  std::string content_;
};

#endif //MULTITHREADING__PRINTTASK_H_
