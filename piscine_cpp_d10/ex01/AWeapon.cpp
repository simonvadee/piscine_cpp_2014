/**
 * vadee_s
 */

#include "AWeapon.hh"

AWeapon::AWeapon(std::string const& name, int apcost, int damage) : _name(name), _dmgNb(damage), _apCost(apcost)
{
}

AWeapon::~AWeapon()
{
}

std::string const	AWeapon::getName() const
{
  return _name;
}

int			AWeapon::getAPCost() const
{
  return _apCost;
}

int			AWeapon::getDamage() const
{
  return _dmgNb;
}
