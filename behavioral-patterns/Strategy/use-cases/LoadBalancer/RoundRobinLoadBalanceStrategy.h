//
// Created by jsjhf on 2023/5/19.
//

#ifndef LOADBALANCER__ROUNDROBINLOADBALANCESTRATEGY_H_
#define LOADBALANCER__ROUNDROBINLOADBALANCESTRATEGY_H_

#include "LoadBalanceStrategy.h"
#include <vector>
#include <string>

class RoundRobinLoadBalanceStrategy: public LoadBalanceStrategy{
 public:
  RoundRobinLoadBalanceStrategy(): index_(-1) {}
  std::string SelectServer(std::vector<std::string>& server_list)
  {
    index_++;
    return server_list[index_ % server_list.size()];
  }

 private:
  int index_;
};

#endif //LOADBALANCER__ROUNDROBINLOADBALANCESTRATEGY_H_
