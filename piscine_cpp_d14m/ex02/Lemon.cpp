/**
 * vadee_s
 */

#include "Lemon.h"

Lemon::Lemon() : Fruit("lemon", 3)
{
}

Lemon::Lemon(std::string const& name, int vit) : Fruit(name, vit)
{
}

Lemon::~Lemon()
{
}

std::string const&		Lemon::getName() const
{
  return _name;
}
