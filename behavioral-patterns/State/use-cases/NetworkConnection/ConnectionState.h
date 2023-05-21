//
// Created by jsjhf on 2023/5/21.
//

#ifndef NETWORKCONNECTION__CONNECTIONSTATE_H_
#define NETWORKCONNECTION__CONNECTIONSTATE_H_

#include <iostream>

// Forward declaration of the Connection class
class Connection;

// Abstract base class for different connection states
class ConnectionState {
 public:
  virtual void open(Connection& connection) = 0;
  virtual void close(Connection& connection) = 0;
  virtual void send(Connection& connection, const std::string& data) = 0;
  virtual void receive(Connection& connection, const std::string& data) = 0;
};

// Concrete state classes

class ClosedState : public ConnectionState {
 public:
  void open(Connection& connection) override;
  void close(Connection& connection) override;
  void send(Connection& connection, const std::string& data) override;
  void receive(Connection& connection, const std::string& data) override;
};

class OpenState : public ConnectionState {
 public:
  void open(Connection& connection) override;
  void close(Connection& connection) override;
  void send(Connection& connection, const std::string& data) override;
  void receive(Connection& connection, const std::string& data) override;
};



#endif //NETWORKCONNECTION__CONNECTIONSTATE_H_
