//
// Created by jsjhf on 2023/5/21.
//

#include "Connection.h"
#include "ConnectionState.h"

void Connection::setState(ConnectionState* state) {
  currentState = state;
}

void Connection::open() {
  currentState->open(*this);
}

void Connection::close() {
  currentState->close(*this);
}

void Connection::send(const std::string& data) {
  currentState->send(*this, data);
}

void Connection::receive(const std::string& data) {
  currentState->receive(*this, data);
}
