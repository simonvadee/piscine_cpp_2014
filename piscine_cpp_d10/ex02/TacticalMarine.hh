/**
 * vadee_s
 */

#ifndef SPACEMARINE_
#define SPACEMARINE_

#include "ISpaceMarine.hh"

class SpaceMarine : ISpaceMarine
{
public:

  SpaceMarine();
  virtual ~SpaceMarine();
  virtual ISpaceMarine* clone() const;
  virtual void battleCry() const;
  virtual void rangedAttack() const;
  virtual void meleeAttack() const;
};


#endif
