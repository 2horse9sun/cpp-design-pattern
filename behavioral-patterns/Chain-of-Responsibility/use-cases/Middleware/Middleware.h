//
// Created by jsjhf on 2023/5/20.
//

#ifndef MIDDLEWARE__MIDDLEWARE_H_
#define MIDDLEWARE__MIDDLEWARE_H_
#include <iostream>
#include <vector>

struct Request {
  std::string path;
};

class Middleware {
 public:
  virtual void handle(Request& request) = 0;
};

class LoggerMiddleware : public Middleware {
 public:
  void handle(Request& request) override {
    std::cout << "Logging request: " << request.path << std::endl;
  }
};

class AuthenticationMiddleware : public Middleware {
 public:
  void handle(Request& request) override {
    std::cout << "Authenticating request: " << request.path << std::endl;
  }
};

class ErrorHandlerMiddleware : public Middleware {
 public:
  void handle(Request& request) override {
    std::cout << "Handling error for request: " << request.path << std::endl;
  }
};

#endif //MIDDLEWARE__MIDDLEWARE_H_
