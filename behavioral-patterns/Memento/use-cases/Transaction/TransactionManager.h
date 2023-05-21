//
// Created by jsjhf on 2023/5/21.
//

#ifndef TRANSACTION__TRANSACTIONMANAGER_H_
#define TRANSACTION__TRANSACTIONMANAGER_H_

#include "Transaction.h"
#include "TransactionMemento.h"
#include <string>
#include <vector>
#include <iostream>

class TransactionManager {
 private:
  Transaction transaction;
  std::vector<TransactionMemento> mementos;

 public:
  void PerformOperation(const std::string& newState) {
    mementos.push_back(transaction.CreateMemento()); // Store current state
    transaction.SetState(newState);
    std::cout << "Performed operation. New state: " << transaction.GetState() << std::endl;
  }

  void UndoOperation() {
    if (!mementos.empty()) {
      TransactionMemento memento = mementos.back();
      mementos.pop_back();
      transaction.RestoreMemento(memento);
      std::cout << "Undo operation. Current state: " << transaction.GetState() << std::endl;
    } else {
      std::cout << "Cannot undo. No previous state available." << std::endl;
    }
  }
};

#endif //TRANSACTION__TRANSACTIONMANAGER_H_
