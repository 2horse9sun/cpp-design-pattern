#include <iostream>
#include "Model.h"
#include "View.h"
#include "Controller.h"

int main() {
  Model model = Model();
  View view1 = View(&model);
  View view2 = View(&model);
  View view3 = View(&model);
  Controller controller = Controller(&model);
  controller.SetModelData("model data changed");
  return 0;
}
