//
// Created by jsjhf on 2023/2/20.
//

#include "DbConfig.h"
#include <string>
#include <fstream>
#include <mutex>

std::mutex DbConfig::mtx_;
DbConfig* volatile DbConfig::db_config_instance_ = nullptr;
//DbConfig* DbConfig::db_config_instance_ = new DbConfig();

DbConfig* volatile DbConfig::GetInstance(){
  if(DbConfig::db_config_instance_ == nullptr){
    mtx_.lock();
    if(DbConfig::db_config_instance_ == nullptr){
      DbConfig::db_config_instance_ = new DbConfig();
    }
    mtx_.unlock();
  }

  return DbConfig::db_config_instance_;
}


DbConfig::DbConfig() {
  printf("Start loading DbConfig...\n");

  std::ifstream file("config.txt");
  std::string buffer;
  int line_number = 0;
  while(std::getline(file, buffer)){
    if (line_number == 0) {
      this->hostname_ = buffer;
    }
    else if (line_number == 1) {
      this->username_ = buffer;
    }
    else if (line_number == 2) {
      this->password_ = buffer;
    }
    line_number++;
  }

  printf("DbConfig successfully loaded\n");
}


std::string DbConfig::GetHostname(){
  return this->hostname_;
}


std::string DbConfig::GetUsername(){
  return this->username_;
}


std::string DbConfig::GetPassword(){
  return this->password_;
}