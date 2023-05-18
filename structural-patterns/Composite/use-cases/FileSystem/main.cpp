#include "FileNode.h"
#include "Directory.h"
#include "File.h"
#include <string>
#include <memory>
#include <iostream>

int main() {
  std::shared_ptr<Directory> root = std::make_shared<Directory>("root");
  std::shared_ptr<File> file1 = std::make_shared<File>("file1");
  std::shared_ptr<Directory> dir1 = std::make_shared<Directory>("dir1");
  root->Add(file1);
  root->Add(dir1);
  std::shared_ptr<File> file2 = std::make_shared<File>("file2");
  std::shared_ptr<File> file3 = std::make_shared<File>("file3");
  dir1->Add(file2);
  dir1->Add(file3);
  root->Print();
  return 0;
}
