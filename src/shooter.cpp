//
#include "shooter.h"

Roll* Shooter::throw_die(Die& d1, Die& d2)
{
  Roll* roll = new Roll(d1, d2);
  roll->roll_die();
  rolls.push_back(roll);
  return roll;
}

Shooter::~Shooter() {
  for (int i = 0; i < rolls.size(); i ++) {
    delete rolls[i];
  }
}

std::ostream& operator<<(std::ostream& out, const Shooter&shooter)
{
  for (int i = 0; i<shooter.rolls.size();i++)
  {
    out<<shooter.rolls[i]<<" ";
  }
  return out;
}

