/**
 * vadee_s
 */

#include "Mage.hh"

Mage::Mage(std::string const& name, int lvl) : Character(name, lvl, 6, 6, 12, 11, 7)
{
  std::cout << name << " teleported" << std::endl;
}
Mage::Mage(std::string const& name, int lvl, int strength, int stamina, int intelligence, int spirit, int agility) : Character(name, lvl)
{
  _strength = strength;
  _stamina = stamina;
  _intelligence = intelligence;
  _spirit = spirit;
  _agility = agility;
  std::cout << _name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int             Mage::CloseAttack()
{
  if (_power < 10)
    {
      std::cout << _name << " out of power" << std::endl;
      return 0;
    }
  _power -= 10;
  std::cout << _name << " blinks" << std::endl;
  Range = RANGE;
  return 0;
}

int             Mage::RangeAttack()
{
  if (_power < 25)
    {
      std::cout << _name << " out of power" << std::endl;
      return 0;
    }
  _power -= 25;
  std::cout << _name << " launches a fire ball" << std::endl;
  return 20 + _spirit;
}

void		Mage::RestorePower()
{
  _power += 50 + _intelligence;
  if (_power > 100)
    _power = 100;
  std::cout << _name << " takes a mana potion" << std::endl;
}
