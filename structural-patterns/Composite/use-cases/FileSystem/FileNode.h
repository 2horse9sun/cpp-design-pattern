//
// Created by jsjhf on 2023/5/18.
//

#ifndef FILESYSTEM__FILENODE_H_
#define FILESYSTEM__FILENODE_H_

#include <string>
#include <memory>

class FileNode{
 public:
  FileNode(std::string name, int level = 0): level_(level), name_(name) {}

  void SetLevel(int level)
  {
    level_ = level;
  }

  std::string GetName()
  {
    return name_;
  }

  int GetLevel()
  {
    return level_;
  }

  virtual void Print() = 0;

 private:
  std::string name_;
  int level_;
};

#endif //FILESYSTEM__FILENODE_H_
