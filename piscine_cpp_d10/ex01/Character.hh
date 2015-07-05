/**
 * vadee_s
 */

#ifndef CHARACTER_
#define CHARACTER_

#include "AWeapon.hh"
#include "AEnemy.hh"

class		Character
{
private:

  int		_ap;
  AWeapon*	_weapon;
  std::string	_name;
  
public:
  Character(std::string const & name);
  ~Character();
  int			getAP() const;
  AWeapon*		getWeapon() const;
  void recoverAP();
  void equip(AWeapon*);
  void attack(AEnemy*);
  std::string const getName() const;
};

std::ostream&	operator<<(std::ostream& os, Character const& character);

#endif
