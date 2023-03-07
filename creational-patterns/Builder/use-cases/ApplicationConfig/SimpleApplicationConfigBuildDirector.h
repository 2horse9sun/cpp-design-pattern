//
// Created by jsjhf on 2023/3/7.
//

#ifndef APPLICATIONCONFIG__SIMPLEAPPLICATIONCONFIGBUILDDIRECTOR_H_
#define APPLICATIONCONFIG__SIMPLEAPPLICATIONCONFIGBUILDDIRECTOR_H_
#include "ApplicationConfig.h"
#include "ApplicationConfigBuilder.h"

class SimpleApplicationConfigBuildDirector {
 private:
  ApplicationConfigBuilder builder_;
 public:
  ApplicationConfig& GetApplicationConfig(){
    builder_.SetMongoConfig("mongo://127.0.0.1:3306", "test");
    return builder_.GetApplicationConfig();
  }
};

#endif //APPLICATIONCONFIG__SIMPLEAPPLICATIONCONFIGBUILDDIRECTOR_H_
