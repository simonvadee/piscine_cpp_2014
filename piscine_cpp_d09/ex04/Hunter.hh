/**
 * vadee_s
 */

#ifndef HUNTER_
#define HUNTER_

#include "Warrior.hh"

class	Hunter : public Warrior
{

public:
  Hunter(std::string const& name, int lvl);
  ~Hunter();

  int           RangeAttack();
  void          RestorePower();
    
};

#endif
