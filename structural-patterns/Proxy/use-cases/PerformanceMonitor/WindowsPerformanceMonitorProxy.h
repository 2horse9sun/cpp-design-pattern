//
// Created by jsjhf on 2023/3/5.
//

#ifndef CACHINGPROXY__WINDOWSPERFORMANCEMONITORPROXY_H_
#define CACHINGPROXY__WINDOWSPERFORMANCEMONITORPROXY_H_
#include <chrono>
#include "PerformanceMonitor.h"
#include "WindowsPerformanceMonitor.h"

class WindowsPerformanceMonitorProxy: public PerformanceMonitor{
 private:
  static PerformanceInfo performance_info_;
  static std::chrono::time_point<std::chrono::system_clock> expiration_timestamp_;
  WindowsPerformanceMonitor win_monitor_;
 public:
  WindowsPerformanceMonitorProxy();
  PerformanceInfo GetPerformanceInfo();
};

#endif //CACHINGPROXY__WINDOWSPERFORMANCEMONITORPROXY_H_
