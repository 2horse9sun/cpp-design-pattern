//
// Created by jsjhf on 2023/3/7.
//

#ifndef APPLICATIONCONFIG__APPLICATIONCONFIG_H_
#define APPLICATIONCONFIG__APPLICATIONCONFIG_H_
#include <string>

class ApplicationConfig {
 public:
  std::string MySQL_URI_;
  std::string MySQL_DB_name_;

  std::string Mongo_URI_;
  std::string Mongo_DB_name_;

  std::string Elasticsearch_URI_;

  std::string AWS_S3_endpoint_;
  std::string AWS_S3_bucket_name_;

  std::string Kafka_URI_;
};

#endif //APPLICATIONCONFIG__APPLICATIONCONFIG_H_
