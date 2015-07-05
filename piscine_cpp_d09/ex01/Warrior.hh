/**
 * vadee_s
 */

#ifndef WARRIOR_
#define WARRIOR_

#include "Character.hh"

class	Warrior : public Character
{

public:
  Warrior(std::string const& name, int lvl);
  ~Warrior();

  int           CloseAttack();
  int           RangeAttack();
  
protected:

  std::string const	_weapon;
};

#endif
