//
// Created by jsjhf on 2023/2/20.
//

#ifndef DBCONFIG__DBCONFIG_H_
#define DBCONFIG__DBCONFIG_H_

#include <string>
#include <mutex>

class DbConfig {
 private:
  static DbConfig* volatile db_config_instance_;
  static std::mutex mtx_;
 public:
  static DbConfig* volatile GetInstance();

 private:
  std::string hostname_;
  std::string username_;
  std::string password_;

  DbConfig();
  DbConfig(const DbConfig& copy) {};
  DbConfig& operator=(const DbConfig& assignment) {};

 public:
  std::string GetHostname();
  std::string GetUsername();
  std::string GetPassword();

};

#endif //DBCONFIG__DBCONFIG_H_
