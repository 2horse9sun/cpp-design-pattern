cmake_minimum_required(VERSION 3.24)
project(GUI)

set(CMAKE_CXX_STANDARD 17)

add_executable(GUI main.cpp Shape.h Color.h Transformation.h RectangleShape.h CircleShape.h TriangleShape.h RedColor.h GreenColor.h BlueColor.h TranslationTransformation.h RotationTransformation.h ScalingTransformation.h BlueColor.cpp RedColor.cpp GreenColor.cpp RotationTransformation.cpp TranslationTranformation.cpp ScalingTransformation.cpp CircleShape.cpp RectangleShape.cpp TriangleShape.cpp)
