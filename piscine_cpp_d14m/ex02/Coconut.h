/**
 * vadee_s
 */

#ifndef COCONUT_
#define COCONUT_

#include <iostream>
#include "Fruit.h"

class			Coconut : public Fruit
{

 public:

  Coconut();
  ~Coconut();

  virtual std::string const&	getName() const;
};

#endif
