/**
 * vadee_s
 */

#include "Paladin.hh"

Paladin::Paladin(std::string const& name, int lvl) : Character(name, lvl), Warrior(name, lvl), Priest(name, lvl, 9, 10, 10, 10, 2)
{
  std::cout << "the light falls on " << name << std::endl;
}

Paladin::~Paladin()
{
}

int		Paladin::Intercept()
{
  return(Warrior::RangeAttack());
}
