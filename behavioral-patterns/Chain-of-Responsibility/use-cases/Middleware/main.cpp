#include "Middleware.h"
#include "WebApplication.h"
#include <iostream>

int main() {
  WebApplication app;

  app.use(new LoggerMiddleware());
  app.use(new AuthenticationMiddleware());
  app.use(new ErrorHandlerMiddleware());

  Request request;
  request.path = "/api/users";

  app.handleRequest(request);
  return 0;
}
