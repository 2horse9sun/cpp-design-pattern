//
// Created by jsjhf on 2023/5/19.
//

#ifndef LOADBALANCER__LOADBALANCER_H_
#define LOADBALANCER__LOADBALANCER_H_

#include "LoadBalanceStrategy.h"
#include <vector>
#include <string>
#include <iostream>

class LoadBalancer{
 public:
  LoadBalancer(LoadBalanceStrategy* strategy): server_list_(std::vector<std::string>()), strategy_(strategy) {}
  void Dispatch()
  {
    std::string server_name = strategy_->SelectServer(server_list_);
    std::cout << "Request dispatched to server: " << server_name << std::endl;
  }

  void AddServer(std::string server_name)
  {
    server_list_.push_back(server_name);
  }

  void SetStrategy(LoadBalanceStrategy* strategy)
  {
    strategy_ = strategy;
  }

 private:
  std::vector<std::string> server_list_;
  LoadBalanceStrategy* strategy_;
};

#endif //LOADBALANCER__LOADBALANCER_H_
