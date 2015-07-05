/**
 * vadee_s
 */

#ifndef PLASMARIFLE_
#define PLASMARIFLE_

#include "AWeapon.hh"

class PlasmaRifle : public AWeapon
{
  
public:
  PlasmaRifle();
  virtual ~PlasmaRifle();

  virtual void attack() const;
};

#endif
