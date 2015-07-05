/**
 * vadee_s
 */

#ifndef TOYSTORY_
#define TOYSTORY_

#include "Toy.h"

class ToyStory;

typedef bool (Toy::*ptrf)(std::string const&);

class		ToyStory
{

 public:

  ToyStory();
  ~ToyStory();

  static void		tellMeAStory(std::string const filename, Toy& toy1, ptrf func1, Toy& toy2, ptrf func2);
  
 private:

};

#endif
