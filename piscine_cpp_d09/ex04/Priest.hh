/**
 * vadee_s
 */

#ifndef PRIEST_
#define PRIEST_

#include "Character.hh"
#include "Mage.hh"

class	Priest : public Mage
{

public:
  Priest(std::string const& name, int lvl);
  ~Priest();
  
  int           CloseAttack();
  void          Heal();

protected:

  
  Priest(std::string const& name, int lvl, int strength, int stamina, int intelligence, int spirit, int agility);

};

#endif
