#include "Document.h"
#include "DocumentVisitor.h"
#include "DocumentElement.h"
#include <iostream>

int main() {
  Document document;

  document.addElement(new Paragraph("This is a paragraph."));
  document.addElement(new Image("image.jpg"));
  document.addElement(new Paragraph("Another paragraph."));

  TextExtractor textExtractor;
  document.accept(&textExtractor);
  std::cout << "Extracted Text: " << textExtractor.getExtractedText() << std::endl;

  ImageRenderer imageRenderer;
  document.accept(&imageRenderer);
  return 0;
}
