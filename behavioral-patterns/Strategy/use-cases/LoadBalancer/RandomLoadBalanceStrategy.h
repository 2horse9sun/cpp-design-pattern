//
// Created by jsjhf on 2023/5/19.
//

#ifndef LOADBALANCER__RANDOMLOADBALANCESTRATEGY_H_
#define LOADBALANCER__RANDOMLOADBALANCESTRATEGY_H_

#include "LoadBalanceStrategy.h"
#include <vector>
#include <string>
#include <random>

class RandomLoadBalanceStrategy: public LoadBalanceStrategy{
 public:
  std::string SelectServer(std::vector<std::string>& server_list)
  {
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0, server_list.size() - 1);
    int random_index = distr(eng);
    return server_list[random_index];
  }
};

#endif //LOADBALANCER__RANDOMLOADBALANCESTRATEGY_H_
