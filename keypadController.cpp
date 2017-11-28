#include "keypadController.h"

keypadController::keypadController(order * items)
{
  cart = items;
  display.refresh(*cart);
}

void keypadController::update(){
  

  display.refresh(*cart);
}
