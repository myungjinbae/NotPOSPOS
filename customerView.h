#ifndef _CUSTOMERVIEW_H_
#define _CUSTOMERVIEW_H_
#include "order.h"

#include "ObserverPattern.cpp"
class customerView
{
  public:
    void refresh(order running);
};

#endif
