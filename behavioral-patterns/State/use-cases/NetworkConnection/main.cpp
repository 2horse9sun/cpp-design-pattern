#include <iostream>
#include "Connection.h"
#include "ConnectionState.h"

int main() {
  Connection connection;
  connection.setState(new ClosedState());
  connection.open();
  connection.send("Hello, server!");
  connection.receive("Welcome, client!");
  connection.close();

  connection.send("Hello, server!");
  connection.receive("Welcome, client!");
  connection.close();

  return 0;
}
