//
// Created by jsjhf on 2023/5/20.
//

#ifndef MIDDLEWARE__WEBAPPLICATION_H_
#define MIDDLEWARE__WEBAPPLICATION_H_
#include "Middleware.h"
#include <vector>

class WebApplication {
 private:
  std::vector<Middleware*> middlewares;

 public:
  void use(Middleware* middleware) {
    middlewares.push_back(middleware);
  }

  void handleRequest(Request& request) {
    for (auto middleware : middlewares) {
      middleware->handle(request);
    }
  }
};

#endif //MIDDLEWARE__WEBAPPLICATION_H_
