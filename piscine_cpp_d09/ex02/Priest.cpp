/**
 * vadee_s
 */

#include "Priest.hh"

Priest::Priest(std::string const& name, int lvl) : Mage(name, lvl, 4, 4, 42, 21, 2)
{
  std::cout << name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int             Priest::CloseAttack()
{
  if (_power < 10)
    {
      std::cout << _name << " out of power" << std::endl;
      return 0;
    }
  _power -= 10;
  std::cout << _name << " uses a spirit explosion" << std::endl;
  return 10 + _spirit;
}

void		Priest::Heal()
{
  if (_power < 10)
    {
      std::cout << _name << " out of power" << std::endl;
      return;
    }
  _power -=10;
  _pv += 70;
  std::cout << _name << " casts a little heal spell" << std::endl;  
}
