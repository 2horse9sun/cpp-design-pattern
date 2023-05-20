#include "Runnable.h"
#include "Thread.h"
#include "PrintTask.h"
#include <iostream>

int main() {
  Runnable* task1 = new PrintTask("task1");
  Runnable* task2 = new PrintTask("task2");
  Runnable* task3 = new PrintTask("task3");

  Thread t1(task1);
  Thread t2(task2);
  Thread t3(task3);

  t1.Start();
  t2.Start();
  t3.Start();

  return 0;
}
