#ifndef ORDER_H
#define ORDER_H
#include "IOrder.h"
#include "ObserverPattern.cpp"
class order : public Observable, public IOrder
{
  private:
    std::vector<item> itemList;
    double tax;
    bool closed;
  public:
    order();
    order(double);
  public:
    void addItem(item);
    std::vector <item> getItems();
    double getSubtotal();
    double getTax();
    double getTotal();
    double balance(double);
};

#endif
