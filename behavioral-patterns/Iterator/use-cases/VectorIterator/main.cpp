#include <iostream>
#include "Vector.h"

int main() {
  Vector<int> vec = Vector<int>();
  vec.PushBack(1);
  vec.PushBack(2);
  vec.PushBack(3);
  vec.PushBack(4);
  vec.PushBack(5);
  vec.PushBack(6);
  vec.PushBack(7);
  vec.PushBack(8);
  vec.PushBack(9);
  for (Vector<int>::Iterator it = vec.Begin(); it != vec.End() ; ++it) {
    std::cout << *it << std::endl;
  }
  return 0;
}
