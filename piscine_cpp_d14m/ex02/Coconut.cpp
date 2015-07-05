/**
 * vadee_s
 */

#include "Coconut.h"

Coconut::Coconut() : Fruit("coconut", 15)
{
}

Coconut::~Coconut()
{
}

std::string const&		Coconut::getName() const
{
  return _name;
}
