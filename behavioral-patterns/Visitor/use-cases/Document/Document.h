//
// Created by jsjhf on 2023/5/21.
//

#ifndef DOCUMENT__DOCUMENT_H_
#define DOCUMENT__DOCUMENT_H_
#include "DocumentElement.h"
#include "DocumentVisitor.h"
#include <iostream>
#include <vector>

class Document {
 private:
  std::vector<DocumentElement*> elements;

 public:
  void addElement(DocumentElement* element) {
    elements.push_back(element);
  }

  void accept(DocumentVisitor* visitor) {
    for (DocumentElement* element : elements) {
      element->accept(visitor);
    }
  }
};

#endif //DOCUMENT__DOCUMENT_H_
