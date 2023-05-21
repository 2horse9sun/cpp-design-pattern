//
// Created by jsjhf on 2023/5/21.
//

#ifndef TRANSACTION__TRANSACTIONMEMENTO_H_
#define TRANSACTION__TRANSACTIONMEMENTO_H_

#include <string>

class TransactionMemento {
 private:
  std::string state;

 public:
  TransactionMemento(const std::string& state) : state(state) {}

  std::string GetState() const {
    return state;
  }
};

#endif //TRANSACTION__TRANSACTIONMEMENTO_H_
