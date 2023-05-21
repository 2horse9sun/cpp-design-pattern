#include "Transaction.h"
#include "TransactionMemento.h"
#include "TransactionManager.h"
#include <string>
#include <iostream>

int main() {
  TransactionManager manager;

  manager.PerformOperation("State 1");
  manager.PerformOperation("State 2");
  manager.PerformOperation("State 3");

  manager.UndoOperation();
  manager.UndoOperation();
  return 0;
}
