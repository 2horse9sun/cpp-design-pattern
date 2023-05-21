//
// Created by jsjhf on 2023/5/21.
//

#include "DocumentElement.h"
#include "DocumentVisitor.h"

std::string Paragraph::getText() const {
  return text;
}

void Paragraph::accept(DocumentVisitor* visitor) {
visitor->visit(this);
}

std::string Image::getSource() const {
  return source;
}

void Image::accept(DocumentVisitor* visitor) {
visitor->visit(this);
}
