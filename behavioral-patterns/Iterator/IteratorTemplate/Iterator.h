//
// Created by jsjhf on 2023/3/7.
//

#ifndef ITERATORTEMPLATE__ITERATOR_H_
#define ITERATORTEMPLATE__ITERATOR_H_

class Iterator{
 public:
  virtual bool HasNext() = 0;
  virtual int Next() = 0;
};

#endif //ITERATORTEMPLATE__ITERATOR_H_
