/**
 * vadee_s
 */

#ifndef WOODY_
#define WOODY_

#include "Toy.h"

class           Woody : public Toy
{
 public:
  
  Woody(std::string const& name);
  Woody(std::string const& name, std::string const& file);
  ~Woody();

  virtual bool		speak(std::string const& statement);
};

#endif
