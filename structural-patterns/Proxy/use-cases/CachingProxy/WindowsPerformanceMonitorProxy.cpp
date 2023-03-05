//
// Created by jsjhf on 2023/3/5.
//
#include <iostream>
#include <chrono>
#include <mutex>
#include "WindowsPerformanceMonitor.h"
#include "WindowsPerformanceMonitorProxy.h"

#define EXPIRATION_MILLISECONDS 500

std::mutex mtx;
PerformanceInfo WindowsPerformanceMonitorProxy::performance_info_;
std::chrono::time_point<std::chrono::system_clock> WindowsPerformanceMonitorProxy::expiration_timestamp_;

WindowsPerformanceMonitorProxy::WindowsPerformanceMonitorProxy() {
  win_monitor_ = WindowsPerformanceMonitor();
  performance_info_ = win_monitor_.GetPerformanceInfo();
  expiration_timestamp_ = std::chrono::system_clock::now() + std::chrono::milliseconds(EXPIRATION_MILLISECONDS);
}

PerformanceInfo WindowsPerformanceMonitorProxy::GetPerformanceInfo() {
  mtx.lock();
  std::chrono::time_point<std::chrono::system_clock> current_timestamp = std::chrono::system_clock::now();
  if(current_timestamp >= expiration_timestamp_){
    performance_info_ = win_monitor_.GetPerformanceInfo();
    expiration_timestamp_ = std::chrono::system_clock::now() + std::chrono::milliseconds(EXPIRATION_MILLISECONDS);
  } else{
    std::cout << "Cache Hit!!! ";
  }
  mtx.unlock();
  return performance_info_;
}
