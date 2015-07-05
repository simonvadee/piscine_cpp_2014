/**
 * vadee_s
 */

#include "AEnemy.hh"

AEnemy::AEnemy(int hp, std::string const& type) : _type(type), _hp(hp)
{
}

AEnemy::~AEnemy()
{
}

std::string const AEnemy::getType() const
{
  return _type;
}

int		AEnemy::getHP() const
{
  return _hp;
}

void		AEnemy::takeDamage(int dmg)
{
  _hp -= dmg;
}
