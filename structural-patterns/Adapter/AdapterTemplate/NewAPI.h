//
// Created by jsjhf on 2023/3/7.
//

#ifndef ADAPTERTEMPLATE__NEWAPI_H_
#define ADAPTERTEMPLATE__NEWAPI_H_

class NewAPI {
 public:
  virtual int NewMethod(int value){
    return value * 2;
  }
};

#endif //ADAPTERTEMPLATE__NEWAPI_H_
