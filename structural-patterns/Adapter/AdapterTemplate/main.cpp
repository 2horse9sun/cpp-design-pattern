#include <iostream>
#include "NewAPI.h"
#include "Adapter.h"

int main() {
  NewAPI* new_api = new NewAPI();
  NewAPI* adapter = new Adapter();

  std::cout << new_api->NewMethod(1) + adapter->NewMethod(1) << std::endl;
  return 0;
}
