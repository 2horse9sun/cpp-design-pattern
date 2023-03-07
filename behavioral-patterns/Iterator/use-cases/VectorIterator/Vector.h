//
// Created by jsjhf on 2023/3/6.
//

#ifndef VECTORITERATOR__VECTOR_H_
#define VECTORITERATOR__VECTOR_H_

template <typename T>
class Vector {
 private:
  int capacity_ = 0;
  int size_ = 0;
  T* array_ = nullptr;

 public:

  class Iterator{
   private:
    T* ptr_ = nullptr;
   public:
    Iterator(T* ptr){
      ptr_ = ptr;
    }

    T& operator*(){
      return *ptr_;
    }

    Iterator& operator++(){
      ptr_++;
      return *this;
    }

    bool operator!=(const Iterator& it){
      return ptr_ != it.ptr_;
    }
  };

  Vector(){
    capacity_ = 4;
    size_ = 0;
    array_ = new T[capacity_];
  }

  int Size(){return size_;}
  int Capacity(){return capacity_;}

  void Resize(){
    capacity_ = capacity_ * 2;
    T* new_array = new T[capacity_];
    memcpy(new_array, array_, sizeof(T) * size_);
    delete[] array_;
    array_ = new_array;
  }

  void PushBack(T value){
    if(size_ + 1 > capacity_){
      this->Resize();
    }
    array_[size_] = value;
    size_++;
  }

  T& operator[](int index){
    return array_[index];
  }

  Iterator Begin(){
    Iterator it = Iterator(array_);
    return it;
  }

  Iterator End(){
    Iterator it = Iterator(array_ + size_);
    return it;
  }

};

#endif //VECTORITERATOR__VECTOR_H_
