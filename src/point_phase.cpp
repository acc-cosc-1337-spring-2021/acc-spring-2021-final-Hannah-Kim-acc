//
#include "point_phase.h"

RollOutcome PointPhase::get_outcome(Roll* roll)
{
  roll->roll_die();
  int roll_value = roll->roll_value();
  if (roll_value == point) {
    return RollOutcome::point;
  } else if (roll_value == 7) {
    return RollOutcome::seven_out;
  } else {
    return RollOutcome::nopoint;
  }
}