/**
 * vadee_s
 */

#ifndef SuperMutant_
#define SuperMutant_

#include <iostream>
#include "AEnemy.hh"

class SuperMutant : public AEnemy
{
  
public:
  
  SuperMutant();
  virtual ~SuperMutant();

  virtual void takeDamage(int);
};

#endif
