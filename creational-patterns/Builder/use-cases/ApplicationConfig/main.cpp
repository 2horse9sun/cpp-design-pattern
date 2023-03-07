#include <iostream>
#include "ApplicationConfig.h"
#include "ApplicationConfigBuilder.h"
#include "SimpleApplicationConfigBuildDirector.h"
#include "ComplexApplicationBuildDirector.h"

int main() {
  ApplicationConfigBuilder builder = ApplicationConfigBuilder();
  builder.SetMySQLConfig("mysql:127.0.0.1:3306", "test");
  ApplicationConfig config1 = builder.GetApplicationConfig();
  std::cout << config1.MySQL_URI_ << std::endl;

  ApplicationConfig config2 = SimpleApplicationConfigBuildDirector().GetApplicationConfig();
  std::cout << config2.Mongo_URI_ << std::endl;
  ApplicationConfig config3 = ComplexApplicationBuildDirector().GetApplicationConfig();
  std::cout << config3.Elasticsearch_URI_ << std::endl;
  return 0;
}
