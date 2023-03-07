#include <iostream>
#include "Stack.h"
#include "Queue.h"

int main() {
  Stack st;
  st.Push(1);st.Push(2);st.Push(3);st.Push(4);st.Push(5);
  std::cout << st.Pop() << std::endl;
  std::cout << st.Pop() << std::endl;
  std::cout << st.Pop() << std::endl;
  std::cout << st.Pop() << std::endl;
  std::cout << st.Pop() << std::endl;

  std::cout << std::endl;

  Queue q;
  q.Push(1);q.Push(2);q.Push(3);q.Push(4);q.Push(5);
  std::cout << q.Pop() << std::endl;
  std::cout << q.Pop() << std::endl;
  std::cout << q.Pop() << std::endl;
  std::cout << q.Pop() << std::endl;
  std::cout << q.Pop() << std::endl;
  return 0;
}
