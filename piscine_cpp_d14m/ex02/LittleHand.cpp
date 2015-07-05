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


FruitBox* const* LittleHand::organizeCoconut(Coconut const* const* coconuts_packet)
{
  FruitBox**	ret;
  unsigned int	i = -1;
  unsigned int	k = 0;
  
  while (coconuts_packet[++i]);
  ret = new FruitBox*[i/6 + 1];
  i = 0;
  while (coconuts_packet[i])
    {
      ret[k] = new FruitBox(6);
      for (unsigned int j = 0; j != 6; j++)
	{
	  if (!coconuts_packet[i])
	    return const_cast<FruitBox* const*>(ret);
	  ret[k]->putFruit(coconuts_packet[i]);
	  i++;
	}
      k++;
    }
  return const_cast<FruitBox* const*>(ret);
}
