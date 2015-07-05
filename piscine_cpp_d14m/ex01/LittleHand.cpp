/**
 * vadee_s
 */

#include "LittleHand.h"


LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}

void		LittleHand::sortFruitBox(FruitBox& unsorted,
					  FruitBox& lemons,
					  FruitBox& bananas,
					  FruitBox& limes)
{
  FruitBox	tmp(unsorted.nbFruits());
  Fruit*	ret;
  
  while (unsorted.head() && unsorted.head()->elem)
    {
      if (unsorted.head()->elem->getName() == "banana")
	{
	  ret = unsorted.pickFruit();
	  if (!(bananas.putFruit(ret)))
	    tmp.putFruit(ret);
	}
      else if (unsorted.head()->elem->getName() == "lemon")
	{
	  ret = unsorted.pickFruit();
	  if (!(lemons.putFruit(ret)))
	    tmp.putFruit(ret);
	}
      else if (unsorted.head()->elem->getName() == "lime")
	{
	  ret = unsorted.pickFruit();
	  if (!(limes.putFruit(ret)))
	    tmp.putFruit(ret);
	}
      else
	tmp.putFruit(unsorted.pickFruit());;
    }
  while (tmp.head() && tmp.head()->elem)
    unsorted.putFruit(tmp.pickFruit());
}
