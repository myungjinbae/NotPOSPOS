#include "order.h"

order::order() {
  tax = 0.0725;
  closed = false;
}

order::order(double tax) {
  this->tax = tax;
  closed = false;
}

void order::addItem(item i) {
  if( !closed )
  {
    itemList.push_back(i);
  }
  notifyObservers();
}

std::vector<item> order::getItems() {
  return itemList;
}

double order::getSubtotal() {
  double subtotal = 0;
  for(int i = 0; i < itemList.size(); i++) {
    subtotal += itemList[i].getPrice();
  }
  return subtotal;
}

double order::getTax() {
  double value=0;
  value = (tax * getSubtotal());
  return value;
}

double order::getTotal() {
  notifyObservers();
  return getSubtotal() * (1 + tax);
}

double order::balance(double paid) {
  closed = true;
  return getTotal() - paid;
}
