/**
 * vadee_s
 */

#include "Character.hh"

Character::Character(std::string const& name) : _ap(40), _weapon(NULL), _name(name)
{
}

Character::~Character()
{
}

std::string const Character::getName() const
{
  return _name;
}

int		Character::getAP() const
{
  return _ap;
}

AWeapon*	Character::getWeapon() const
{
  return _weapon;
}

void	Character::recoverAP()
{
  _ap += 10;
  if (_ap > 40)
    _ap = 40;
}

void	Character::equip(AWeapon* weapon)
{
  _weapon = weapon;
}

void	Character::attack(AEnemy* enemy)
{
  if ((_ap - _weapon->getAPCost() < 0) || !_weapon || !enemy)
    return;
  std::cout << _name << " attacks " << enemy->getType() <<" with a " << _weapon->getName() << std::endl;
  _weapon->attack();
  _ap -= _weapon->getAPCost();
  enemy->takeDamage(_weapon->getDamage());
  if (enemy->getHP() <= 0)
    delete enemy;
}

std::ostream&	operator<<(std::ostream& os, Character const& character)
{
  if (character.getWeapon())
    os << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeapon()->getName() << std::endl;
  else
    os << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;
  return os;
}
