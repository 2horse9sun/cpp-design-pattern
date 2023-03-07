//
// Created by jsjhf on 2023/3/7.
//

#ifndef ADAPTERTEMPLATE__ADAPTER_H_
#define ADAPTERTEMPLATE__ADAPTER_H_
#include "LegacyAPI.h"
#include "NewAPI.h"

class Adapter: public NewAPI{
 private:
  LegacyAPI legacy_api_;
 public:
  int NewMethod(int value){
    return legacy_api_.LegacyMethod(value);
  }
};

#endif //ADAPTERTEMPLATE__ADAPTER_H_
