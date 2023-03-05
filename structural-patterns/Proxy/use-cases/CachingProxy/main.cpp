#include <iostream>
#include <chrono>
#include <thread>
#include "PerformanceMonitor.h"
#include "WindowsPerformanceMonitor.h"
#include "WindowsPerformanceMonitorProxy.h"

void do_monitor(PerformanceMonitor* monitor, int thread_number, int interval){
  while(1){
    PerformanceInfo performance_info = monitor->GetPerformanceInfo();
    printf("Thread %d, CPU Usage: %f%%, VM Usage: %f%%\n", thread_number, performance_info.cpu_usage, performance_info.vm_usage);
    std::this_thread::sleep_for(std::chrono::milliseconds(interval));
  }
}

int main() {
//  PerformanceMonitor* monitor = new WindowsPerformanceMonitor();
  PerformanceMonitor* monitor = new WindowsPerformanceMonitorProxy();
  int thread_count = 5;
  int interval = 2000;
  std::thread* thread_array = new std::thread[thread_count];
  for (int i = 0; i < thread_count; ++i) {
    thread_array[i] = std::thread(do_monitor, monitor, i, interval);
  }
  for (int i = 0; i < thread_count; ++i) {
    thread_array[i].join();
  }

  return 0;
}
