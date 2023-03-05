#include <iostream>
#include <string>
#include "Text.h"
#include "WindowsText.h"
#include "LinuxText.h"
#include "MacText.h"
#include "BoldTextDecorator.h"
#include "ItalicTextDecorator.h"
#include "UnderlineTextDecorator.h"

int main() {
  std::string text_content = "TextToBeRendered";

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
  Text* text = new WindowsText(text_content);
#elif __APPLE__
  Text* text = new LinuxText(text_content);
#elif __linux__
  Text* text = new MacText(text_content);
#else
# error "Unknown compiler"
#endif

  Text* bold_text = new BoldTextDecorator(text);
  Text* italic_bold_text = new ItalicTextDecorator(bold_text);
  Text* underlined_italic_bold_text = new UnderlineTextDecorator(italic_bold_text);
  underlined_italic_bold_text->Render();
  return 0;
}
