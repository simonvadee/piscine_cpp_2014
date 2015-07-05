/**
 * vadee_s
 */

#ifndef PRIEST_
#define PRIEST_

#include "Mage.hh"

class	Priest : public Mage
{

public:
  Priest(std::string const& name, int lvl);
  ~Priest();
  
  int           CloseAttack();
  void          Heal();
};

#endif
