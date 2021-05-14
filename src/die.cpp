//
#include "die.h"

#include <iostream>

void Die::roll()
{
  roll_value = (rand() % sides) + 1;
}
