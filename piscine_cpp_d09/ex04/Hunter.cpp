/**                                                                                                                  
 * vadee_s                                                                                                           
 */

#include "Warrior.hh"
#include "Hunter.hh"

Hunter::Hunter(std::string const& name, int lvl) : Character(name, lvl), Warrior(name, lvl, 9, 9, 5, 6, 24) 
{
  std::cout << name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{
}

int             Hunter::RangeAttack()
{
  if (_power < 25)
    {
      std::cout << _name << " out of power" << std::endl;
      return 0;
    }
  _power -= 25;
  std::cout << _name << " uses his bow" << std::endl;
  return 20 + _agility;
}

void		Hunter::RestorePower()
{
  _power = 100;
  std::cout << _name << " meditates" << std::endl;
}
