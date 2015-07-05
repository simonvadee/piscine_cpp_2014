/**
 * vadee_s
 */

#ifndef POWERFIST_
#define POWERFIST_

#include "AWeapon.hh"

class PowerFist : public AWeapon
{
  
public:
  PowerFist();
  virtual ~PowerFist();

  virtual void attack() const;
};

#endif
