#include <iostream>
#include <thread>
#include "Singleton.h"

void ThreadFunc(int thread_number){
  printf("Thread %d: Start calling SingletonThreadSafe()...\n", thread_number);
  for (int i = 0; i < 5; ++i) {
    SingletonThreadSafe* volatile singleton_thread_safe = SingletonThreadSafe::GetInstance();
    printf("Address of SingletonThreadSafe instance %d: 0x%x\n", i, singleton_thread_safe);
  }
}


int main() {
  std::cout << "Start calling SingletonEager()..." << std::endl;
  for (int i = 0; i < 5; ++i) {
    SingletonEager* singleton_eager = SingletonEager::GetInstance();
    printf("Address of SingletonEager instance %d: 0x%x\n", i, singleton_eager);
  }

  std::cout << "Start calling SingletonLazy()..." << std::endl;
  for (int i = 0; i < 5; ++i) {
    SingletonLazy* singleton_lazy = SingletonLazy::GetInstance();
    printf("Address of SingletonLazy instance %d: 0x%x\n", i, singleton_lazy);
  }

  std::thread thread1(ThreadFunc, 1);
  std::thread thread2(ThreadFunc, 2);
  thread1.join();
  thread2.join();
  return 0;
}
