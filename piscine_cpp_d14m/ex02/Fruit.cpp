/**
 * vadee_s
 */

#include "Fruit.h"

Fruit::Fruit(std::string const& name, int vit) : _name(name), _vitamins(vit)
{
}

Fruit::~Fruit()
{
}

int			Fruit::getVitamins() const
{
  return _vitamins;
}
