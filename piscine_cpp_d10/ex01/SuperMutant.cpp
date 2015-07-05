/**
 * vadee_s
 */

#include "SuperMutant.hh"

SuperMutant::SuperMutant() : AEnemy(170, "Super Mutant")
{
  std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
  std::cout << "Aaargh ..." << std::endl;
}

void		SuperMutant::takeDamage(int dmg)
{
  if (dmg < 3)
    return;
  _hp -= dmg - 3;
}
