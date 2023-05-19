//
// Created by jsjhf on 2023/5/19.
//

#ifndef LOADBALANCER__LOADBALANCESTRATEGY_H_
#define LOADBALANCER__LOADBALANCESTRATEGY_H_

#include <vector>
#include <string>

class LoadBalanceStrategy{
 public:
  virtual std::string SelectServer(std::vector<std::string>& server_list) = 0;
};

#endif //LOADBALANCER__LOADBALANCESTRATEGY_H_
