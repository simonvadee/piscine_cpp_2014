/**
 * vadee_s
 */

#include "Warrior.hh"

Warrior::Warrior(std::string const& name, int lvl) : Character(name, lvl, 12, 12, 6, 5, 7), _weapon("hammer")
{
  std::cout << "I'm " << name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int             Warrior::CloseAttack()
{
  if (_power < 30)
    {
      std::cout << _name << " out of power" << std::endl;
      return 0;
    }
  _power -= 30;
  std::cout << _name << " strikes with his " << _weapon << std::endl;
  return 20 + _strength;
}

int             Warrior::RangeAttack()
{
  if (_power < 10)
    {
      std::cout << _name << " out of power" << std::endl;
      return 0;
    }
  _power -= 10;
  std::cout << _name << " intercepts" << std::endl;
  Range = CLOSE;
  return 0;
}
