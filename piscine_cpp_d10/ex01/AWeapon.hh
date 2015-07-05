/**
 * vadee_s
 */

#ifndef AWEAPON_
#define AWEAPON_

#include <iostream>

class AWeapon
{
private:
  
  std::string	_name;
  int		_dmgNb;
  int		_apCost;
  
public:
  AWeapon(std::string const & name, int apcost, int damage);
  virtual ~AWeapon();

  std::string const getName() const;
  int getAPCost() const;
  int getDamage() const;

  virtual void attack() const = 0;
};

#endif
