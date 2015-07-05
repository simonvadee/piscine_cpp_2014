/**
 * vadee_s
 */

#ifndef LITLLEHANDS_
#define LITLLEHANDS_

#include "FruitBox.h"

class		LittleHand
{

 public:

  LittleHand();
  ~LittleHand();

  virtual void sortFruitBox(FruitBox& unsorted,
		    FruitBox& lemons,
		    FruitBox& bananas,
		    FruitBox& limes);
};

#endif
