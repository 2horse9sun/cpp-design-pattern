//
// Created by jsjhf on 2023/5/18.
//

#ifndef FILESYSTEM__FILE_H_
#define FILESYSTEM__FILE_H_

#include "FileNode.h"
#include <string>
#include <vector>
#include <memory>
#include <iostream>

class File: public FileNode{
 public:
  File(std::string name, int level = 0): FileNode(name, level) {}

  void Print()
  {
    for(int indent = 0; indent < GetLevel(); indent++)
    {
      std::cout << "\t";
    }
    std::cout << GetName() << std::endl;
  }

};

#endif //FILESYSTEM__FILE_H_
