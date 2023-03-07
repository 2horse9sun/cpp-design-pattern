//
// Created by jsjhf on 2023/3/7.
//

#ifndef APPLICATIONCONFIG__APPLICATIONCONFIGBUILDER_H_
#define APPLICATIONCONFIG__APPLICATIONCONFIGBUILDER_H_
#include <string>
#include "ApplicationConfig.h"

class ApplicationConfigBuilder {
 private:
  ApplicationConfig config_;

 public:
  void SetMySQLConfig(std::string MySQL_URI, std::string MySQL_DB_name){
    config_.MySQL_URI_ = MySQL_URI;
    config_.MySQL_DB_name_ = MySQL_DB_name;
  }

  void SetMongoConfig(std::string Mongo_URI, std::string Mongo_DB_name){
    config_.Mongo_URI_ = Mongo_URI;
    config_.Mongo_DB_name_ = Mongo_DB_name;
  }

  void SetElasticsearchConfig(std::string Elasticsearch_URI){
    config_.Elasticsearch_URI_ = Elasticsearch_URI;
  }

  void SetS3Config(std::string AWS_S3_endpoint, std::string AWS_S3_bucket_name){
    config_.AWS_S3_endpoint_ = AWS_S3_endpoint;
    config_.AWS_S3_bucket_name_ = AWS_S3_bucket_name;
  }

  void SetKafkaConfig(std::string Kafka_URI){
    config_.Kafka_URI_ = Kafka_URI;
  }

  ApplicationConfig& GetApplicationConfig(){
    return config_;
  }
};

#endif //APPLICATIONCONFIG__APPLICATIONCONFIGBUILDER_H_
