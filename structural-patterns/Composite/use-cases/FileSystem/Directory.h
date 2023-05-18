//
// Created by jsjhf on 2023/5/18.
//

#ifndef FILESYSTEM__DIRECTORY_H_
#define FILESYSTEM__DIRECTORY_H_

#include "FileNode.h"
#include <string>
#include <vector>
#include <memory>
#include <iostream>

class Directory: public FileNode{
 public:
  Directory(std::string name, int level = 0): FileNode(name, level), files_(std::vector<std::shared_ptr<FileNode>>()) {}

  void Add(std::shared_ptr<FileNode> pFileNode)
  {
    pFileNode->SetLevel(GetLevel() + 1);
    files_.push_back(pFileNode);
  }

  void Print()
  {
    for(int indent = 0; indent < GetLevel(); indent++)
    {
      std::cout << "\t";
    }
    std::cout << GetName() << "/" << std::endl;
    for(auto file: files_)
    {
      file->Print();
    }
  }

 private:
  std::vector<std::shared_ptr<FileNode>> files_;
};

#endif //FILESYSTEM__DIRECTORY_H_
