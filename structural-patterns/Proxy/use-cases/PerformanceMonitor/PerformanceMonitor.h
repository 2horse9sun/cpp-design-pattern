//
// Created by jsjhf on 2023/3/5.
//

#ifndef CACHINGPROXY__PERFORMANCEMONITOR_H_
#define CACHINGPROXY__PERFORMANCEMONITOR_H_

typedef struct PerformanceInfo{
  double cpu_usage;
  double vm_usage;
} PerformanceInfo;

class PerformanceMonitor {
 public:
  virtual PerformanceInfo GetPerformanceInfo() = 0;
};

#endif //CACHINGPROXY__PERFORMANCEMONITOR_H_
