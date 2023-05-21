//
// Created by jsjhf on 2023/5/21.
//

#include "DocumentVisitor.h"
#include "DocumentElement.h"
#include <iostream>

void TextExtractor::visit(Paragraph* paragraph) {
  extractedText += paragraph->getText() + " ";
}

void TextExtractor::visit(Image* image) {
// Ignore images for text extraction
}

std::string TextExtractor::getExtractedText() const {
  return extractedText;
}

void ImageRenderer::visit(Paragraph* paragraph) {
// Ignore paragraphs for image rendering
}

void ImageRenderer::visit(Image* image) {
std::cout << "Rendering image from source: " << image->getSource() << std::endl;
// Render image logic goes here
}
