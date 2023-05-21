//
// Created by jsjhf on 2023/5/21.
//

#include <iostream>
#include "Connection.h"
#include "ConnectionState.h"

void ClosedState::open(Connection& connection) {
  std::cout << "Opening the connection." << std::endl;
  // Perform connection opening logic
  connection.setState(new OpenState());
}

void ClosedState::close(Connection& connection) {
  std::cout << "Connection is already closed." << std::endl;
  // Perform actions for already closed connection
}

void ClosedState::send(Connection& connection, const std::string& data) {
  std::cout << "Connection is closed. Cannot send data." << std::endl;
  // Perform actions for sending data on a closed connection
}

void ClosedState::receive(Connection& connection, const std::string& data) {
  std::cout << "Connection is closed. Cannot receive data." << std::endl;
  // Perform actions for receiving data on a closed connection
}

void OpenState::open(Connection& connection) {
  std::cout << "Connection is already open." << std::endl;
  // Perform actions for already open connection
}

void OpenState::close(Connection& connection) {
  std::cout << "Closing the connection." << std::endl;
  // Perform connection closing logic
  connection.setState(new ClosedState());
}

void OpenState::send(Connection& connection, const std::string& data) {
  std::cout << "Sending data over the connection: " << data << std::endl;
  // Perform data sending logic
}

void OpenState::receive(Connection& connection, const std::string& data) {
  std::cout << "Receiving data over the connection: " << data << std::endl;
  // Perform data receiving logic
}