//
// Created by jsjhf on 2023/5/21.
//

#ifndef TRANSACTION__TRANSACTION_H_
#define TRANSACTION__TRANSACTION_H_

#include "TransactionMemento.h"
#include <string>

class Transaction {
 private:
  std::string state;

 public:
  void SetState(const std::string& newState) {
    state = newState;
  }

  std::string GetState() const {
    return state;
  }

  TransactionMemento CreateMemento() {
    return TransactionMemento(state);
  }

  void RestoreMemento(const TransactionMemento& memento) {
    state = memento.GetState();
  }
};

#endif //TRANSACTION__TRANSACTION_H_
