/**
 * vadee_s
 */

#ifndef BUZZ_
#define BUZZ_

#include "Toy.h"

class		Buzz : public Toy
{
 public:

  Buzz(std::string const& name);
  Buzz(std::string const& name, std::string const& file);
  ~Buzz();

  virtual bool		speak(std::string const& statement);
  virtual bool		speak_es(std::string const& statement);
};

#endif
