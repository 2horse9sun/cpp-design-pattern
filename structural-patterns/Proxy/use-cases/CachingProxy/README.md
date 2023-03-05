# Use case: Add caching functionality

Users call `GetPerformanceInfo` of `WindowsPerformanceMonitor` concurrently to get real-time metrics of servers. `WindowsPerformanceMonitorProxy` adds an additional caching layer to improve efficiency.