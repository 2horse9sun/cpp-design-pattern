//
// Created by jsjhf on 2023/3/5.
//

#ifndef CACHINGPROXY__WINDOWSPERFORMANCEMONITOR_H_
#define CACHINGPROXY__WINDOWSPERFORMANCEMONITOR_H_

#include "PerformanceMonitor.h"

class WindowsPerformanceMonitor: public PerformanceMonitor{
 private:
  double GetCPUUsage();
  double GetVirtualMemoryUsage();
 public:
  PerformanceInfo GetPerformanceInfo();
};



#endif //CACHINGPROXY__WINDOWSPERFORMANCEMONITOR_H_
