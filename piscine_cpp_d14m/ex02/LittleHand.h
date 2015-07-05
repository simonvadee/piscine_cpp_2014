/**
 * vadee_s
 */

#ifndef LITLLEHANDS_
#define LITLLEHANDS_

#include "FruitBox.h"
#include "Coconut.h"

class		LittleHand
{

 public:

  LittleHand();
  ~LittleHand();

  static void sortFruitBox(FruitBox& unsorted,
		    FruitBox& lemons,
		    FruitBox& bananas,
		    FruitBox& limes);

  static FruitBox* const* organizeCoconut(Coconut const* const* coconuts_packet);
};

#endif
