#ifndef PROTOTYPETEMPLATE__PROTOTYPE_H_
#define PROTOTYPETEMPLATE__PROTOTYPE_H_

class Prototype {
 private:
  int width_ = 0;
  int height_ = 0;
  int* data_ = nullptr;
 public:
  Prototype();
  Prototype(int width, int height);
  Prototype(const Prototype& prototype);
  Prototype& operator=(const Prototype& prototype);
  ~Prototype();

  int GetWidth();
  void SetWidth(int width);
  int GetHeight();
  void SetHeight(int height);

};

#endif //PROTOTYPETEMPLATE__PROTOTYPE_H_
