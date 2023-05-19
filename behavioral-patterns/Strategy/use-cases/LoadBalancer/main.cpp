#include "LoadBalanceStrategy.h"
#include "RandomLoadBalanceStrategy.h"
#include "RoundRobinLoadBalanceStrategy.h"
#include "LoadBalancer.h"
#include <string>
#include <iostream>

int main() {
  LoadBalanceStrategy* random_strategy = new RandomLoadBalanceStrategy();
  LoadBalanceStrategy* round_robin_strategy = new RoundRobinLoadBalanceStrategy();

  LoadBalancer load_balancer(random_strategy);
  load_balancer.AddServer("1");
  load_balancer.AddServer("2");
  load_balancer.AddServer("3");
  load_balancer.AddServer("4");
  load_balancer.AddServer("5");
  for(int i = 0; i < 10; i++)
  {
    load_balancer.Dispatch();
  }
  std::cout << std::endl;

  load_balancer.SetStrategy(round_robin_strategy);
  for(int i = 0; i < 10; i++)
  {
    load_balancer.Dispatch();
  }
  return 0;
}
