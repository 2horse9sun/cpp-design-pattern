//
// Created by jsjhf on 2023/5/21.
//

#ifndef DOCUMENT__DOCUMENTELEMENT_H_
#define DOCUMENT__DOCUMENTELEMENT_H_
#include <string>

class DocumentVisitor;

class DocumentElement {
 public:
  virtual void accept(DocumentVisitor* visitor) = 0;
};

class Paragraph : public DocumentElement {
 private:
  std::string text;

 public:
  Paragraph(const std::string& text) : text(text) {}

  std::string getText() const;

  void accept(DocumentVisitor* visitor) override;
};

class Image : public DocumentElement {
 private:
  std::string source;

 public:
  Image(const std::string& source) : source(source) {}

  std::string getSource() const;

  void accept(DocumentVisitor* visitor) override;
};

#endif //DOCUMENT__DOCUMENTELEMENT_H_
