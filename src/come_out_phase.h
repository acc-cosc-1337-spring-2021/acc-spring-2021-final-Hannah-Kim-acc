//
#ifndef COME_OUT_PHASE_H
#define COME_OUT_PHASE_H
#include "phase.h"

class ComeOutPhase : public Phase
{
  RollOutcome get_outcome(Roll* roll)override ;
};

#endif