/**
 *
 */

#include "SpaceMarine.hh"

SpaceMarine::SpaceMarine()
{
}

SpaceMarine::~SpaceMarine()
{
}

ISpaceMarine*	SpaceMarine::clone() const
{
  return new ISpaceMarine(this);
}
