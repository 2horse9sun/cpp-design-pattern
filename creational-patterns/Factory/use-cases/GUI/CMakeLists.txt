cmake_minimum_required(VERSION 3.24)
project(GUI)

set(CMAKE_CXX_STANDARD 17)

add_executable(GUI main.cpp GUIFactory.h WindowsGUIFactory.h LinuxGUIFactory.h MacGUIFactory.h WindowsButton.h LinuxButton.h MacButton.h WindowsCheckbox.h LinuxCheckbox.h MacCheckbox.h Button.h Checkbox.h)
