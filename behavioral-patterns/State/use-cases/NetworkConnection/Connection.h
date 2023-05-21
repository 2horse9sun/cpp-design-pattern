//
// Created by jsjhf on 2023/5/21.
//

#ifndef NETWORKCONNECTION__CONNECTION_H_
#define NETWORKCONNECTION__CONNECTION_H_

#include <iostream>

class ConnectionState;

class Connection {
 private:
  ConnectionState* currentState;

 public:
  Connection() : currentState(nullptr) {}

  void setState(ConnectionState* state);

  void open();

  void close();

  void send(const std::string& data);

  void receive(const std::string& data);
};

#endif //NETWORKCONNECTION__CONNECTION_H_
