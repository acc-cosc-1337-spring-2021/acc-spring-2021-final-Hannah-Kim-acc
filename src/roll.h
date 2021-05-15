//
#ifndef ROLL_H
#define ROLL_H
#include "die.h"

class Roll 
{
  public:
  Roll(Die& d1, Die& d2): die1(d1), die2(d2){}
  int roll_value()const{return value;}
  void roll_die();

  private:
  int value;
  bool rolled = 0;
  Die& die1, die2;
};


#endif
