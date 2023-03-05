cmake_minimum_required(VERSION 3.24)
project(TextFormatting)

set(CMAKE_CXX_STANDARD 17)

add_executable(TextFormatting main.cpp Text.h WindowsText.h LinuxText.h MacText.h BoldTextDecorator.h ItalicTextDecorator.h UnderlineTextDecorator.h)
