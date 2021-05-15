//
#ifndef SHOOTER_H
#define SHOOTER_H
#include "die.h"
#include "roll.h"     
#include <iostream>    
#include <vector>
using std::vector;   

class Shooter
{
  public:
  Roll* throw_die(Die& d1, Die& d2);
  friend std::ostream& operator<<(std::ostream& out, const Shooter& shooter);
  ~Shooter();

  private:
  vector<Roll*> rolls;

};

#endif