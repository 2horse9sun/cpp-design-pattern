//
// Created by jsjhf on 2023/3/7.
//

#ifndef APPLICATIONCONFIG__COMPLEXAPPLICATIONBUILDDIRECTOR_H_
#define APPLICATIONCONFIG__COMPLEXAPPLICATIONBUILDDIRECTOR_H_
#include "ApplicationConfig.h"
#include "ApplicationConfigBuilder.h"

class ComplexApplicationBuildDirector {
 private:
  ApplicationConfigBuilder builder_;
 public:
  ApplicationConfig& GetApplicationConfig(){
    builder_.SetMySQLConfig("mysql://127.0.0.1:3306", "test");
    builder_.SetS3Config("https://test.s3.eu-west-1.amazonaws.com/", "test");
    builder_.SetElasticsearchConfig("es://127.0.0.1:9200");
    builder_.SetKafkaConfig("kafka://127.0.0.1:9092");
    return builder_.GetApplicationConfig();
  }
};

#endif //APPLICATIONCONFIG__COMPLEXAPPLICATIONBUILDDIRECTOR_H_
