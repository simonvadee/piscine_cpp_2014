/**
 * vadee_s
 */

#ifndef WARRIOR_
#define WARRIOR_

#include "Character.hh"

class	Warrior : virtual public Character
{

public:
  Warrior(std::string const& name, int lvl);

  int           CloseAttack();
  int           RangeAttack();
  ~Warrior();

protected:
  Warrior(std::string const& name, int lvl, int strength, int stamina, int intelligence, int spirit, int agility);

  
  
private:

  std::string const	_weapon;
};

#endif
