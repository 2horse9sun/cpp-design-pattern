#include <iostream>
#include "DbConfig.h"
#include <thread>

void LoadConfig(int thread_number){
  for (int i = 0; i < 10; ++i) {
    DbConfig* volatile config = DbConfig::GetInstance();
    std::cout << "Thread " << thread_number << ": "
              << i << ": "
              << "hostname=" << config->GetHostname()
              << ",username=" << config->GetUsername()
              << ",password=" << config->GetPassword()
              << ",address of config=" << config << std::endl;
  }
}

int main() {
  std::thread thread_1(LoadConfig, 1);
  std::thread thread_2(LoadConfig, 2);
  thread_1.join();
  thread_2.join();
  return 0;
}
