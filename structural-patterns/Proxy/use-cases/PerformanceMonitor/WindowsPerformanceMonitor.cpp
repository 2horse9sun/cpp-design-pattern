//
// Created by jsjhf on 2023/3/5.
//
#include <iostream>
#include <Windows.h>
#include "WindowsPerformanceMonitor.h"

double WindowsPerformanceMonitor::GetCPUUsage() {
  FILETIME idle_time, kernel_time, user_time;

  if (!GetSystemTimes(&idle_time, &kernel_time, &user_time)) {
    std::cerr << "Error: GetSystemTimes failed\n";
    return 1;
  }

  ULONGLONG last_idle_time = idle_time.dwLowDateTime + ((ULONGLONG)idle_time.dwHighDateTime << 32);
  ULONGLONG last_kernel_time = kernel_time.dwLowDateTime + ((ULONGLONG)kernel_time.dwHighDateTime << 32);
  ULONGLONG last_user_time = user_time.dwLowDateTime + ((ULONGLONG)user_time.dwHighDateTime << 32);

  Sleep(500);

  if (!GetSystemTimes(&idle_time, &kernel_time, &user_time)) {
    std::cerr << "Error: GetSystemTimes failed\n";
    return 1;
  }

  ULONGLONG current_idle_time = idle_time.dwLowDateTime + ((ULONGLONG)idle_time.dwHighDateTime << 32);
  ULONGLONG current_kernel_time = kernel_time.dwLowDateTime + ((ULONGLONG)kernel_time.dwHighDateTime << 32);
  ULONGLONG current_user_time = user_time.dwLowDateTime + ((ULONGLONG)user_time.dwHighDateTime << 32);

  ULONGLONG idle_time_delta = current_idle_time - last_idle_time;
  ULONGLONG kernel_time_delta = current_kernel_time - last_kernel_time;
  ULONGLONG user_time_delta = current_user_time - last_user_time;

  ULONGLONG totalTime_delta = kernel_time_delta + user_time_delta;
  double cpu_usage = ((double)totalTime_delta - (double)idle_time_delta) / (double)totalTime_delta * 100.0;
  return cpu_usage;
}

double WindowsPerformanceMonitor::GetVirtualMemoryUsage() {
  MEMORYSTATUSEX memory_status;
  memory_status.dwLength = sizeof(memory_status);

  if (!GlobalMemoryStatusEx(&memory_status)) {
    std::cerr << "Error: GlobalMemoryStatusEx failed\n";
    return 1;
  }

  DWORDLONG total_vm = memory_status.ullTotalPageFile;
  DWORDLONG vm_used = memory_status.ullTotalPageFile - memory_status.ullAvailPageFile;
  double vm_usage = (double)vm_used / (double)total_vm * 100.0;
  return vm_usage;
}

PerformanceInfo WindowsPerformanceMonitor::GetPerformanceInfo() {
  double cpu_usage = this->GetCPUUsage();
  double vm_usage = this->GetVirtualMemoryUsage();
  PerformanceInfo performance_info = {cpu_usage, vm_usage};
  return performance_info;
}