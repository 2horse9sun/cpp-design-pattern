//
// Created by jsjhf on 2023/5/21.
//

#ifndef DOCUMENT__DOCUMENTVISITOR_H_
#define DOCUMENT__DOCUMENTVISITOR_H_
#include <string>

class Document;
class Paragraph;
class Image;

class DocumentVisitor {
 public:
  virtual void visit(Paragraph* paragraph) = 0;
  virtual void visit(Image* image) = 0;
};

class TextExtractor : public DocumentVisitor {
 private:
  std::string extractedText;

 public:
  void visit(Paragraph* paragraph) override;

  void visit(Image* image) override;

  std::string getExtractedText() const;
};

// Concrete Visitor: ImageRenderer
class ImageRenderer : public DocumentVisitor {
 public:
  void visit(Paragraph* paragraph) override;

  void visit(Image* image) override;
};

#endif //DOCUMENT__DOCUMENTVISITOR_H_
