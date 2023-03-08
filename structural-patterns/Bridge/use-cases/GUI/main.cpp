#include <iostream>
#include "Shape.h"
#include "RectangleShape.h"
#include "TriangleShape.h"
#include "CircleShape.h"
#include "Color.h"
#include "RedColor.h"
#include "GreenColor.h"
#include "BlueColor.h"
#include "Transformation.h"
#include "TranslationTransformation.h"
#include "RotationTransformation.h"
#include "ScalingTransformation.h"

int main() {
  Color* red = new RedColor();
  Color* green = new GreenColor();
  Color* blue = new BlueColor();
  Transformation* translation = new TranslationTransformation();
  Transformation* rotation = new RotationTransformation();
  Transformation* scaling = new ScalingTransformation();

  Shape* rectangle = new RectangleShape();
  rectangle->SetColor(red);
  rectangle->SetTransformation(translation);
  rectangle->Render();
  std::cout << std::endl;

  Shape* triangle = new TriangleShape();
  triangle->SetColor(green);
  triangle->SetTransformation(rotation);
  triangle->SetTransformation(scaling);
  triangle->Render();
  std::cout << std::endl;

  Shape* circle = new CircleShape();
  circle->SetColor(blue);
  circle->SetTransformation(translation);
  circle->SetTransformation(rotation);
  circle->SetTransformation(scaling);
  circle->Render();
  std::cout << std::endl;
  return 0;
}
