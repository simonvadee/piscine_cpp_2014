/**
 * vadee_s
 */

#include "Character.hh"

Character::Character(std::string const& name, int lvl) : Range(CLOSE), _name(name), _lvl(lvl), _pv(100), _power(100), _strength(5), _stamina(5), _intelligence(5), _spirit(5), _agility(5)
{
  std::cout << _name << " Created" << std::endl;
}

Character::Character(std::string const& name, int lvl, int strength, int stamina, int intelligence, int spirit, int agility) : Range(CLOSE), _name(name), _lvl(lvl), _pv(100), _power(100), _strength(strength), _stamina(stamina), _intelligence(intelligence), _spirit(spirit), _agility(agility)
{
  std::cout << _name << " Created" << std::endl;
}

Character::~Character()
{
}

std::string const&	Character::getName() const
{
  return this->_name;
}

int		Character::getLvl() const
{
  return this->_lvl;
}

int		Character::getPv() const
{
  return this->_pv;
}

int		Character::getPower() const
{
  return this->_power;
}

int		Character::CloseAttack()
{
  if (_power < 10)
    {
       std::cout << _name << " out of power" << std::endl;
       return 0;
    }
  _power -= 10;
  std::cout << _name << " strikes with a wood stick" << std::endl;
  return 10 + _strength;
}

int		Character::RangeAttack()
{
  if (_power < 10)
    {
       std::cout << _name << " out of power" << std::endl;
       return 0;
    }
  _power -= 10;
  std::cout << _name << " launches a stone" << std::endl;
  return 5 + _strength;
}

void		Character::Heal()
{
  _pv += 50;
  if (_pv > 100)
    _pv = 100;
  std::cout << _name << " takes a potion" << std::endl;  
}

void		Character::RestorePower()
{
  _power = 100;
  std::cout << _name << " eats" << std::endl;
}

void		Character::TakeDamage(int dmg)
{
  if ((_pv -= dmg) > 0)
      std::cout << _name << " takes " << dmg << " damage" << std::endl;
  else
    {
      std::cout << _name << " out of combat" << std::endl;
      _pv = 0;
    }
}
