/**
 * vadee_s
 */

#ifndef FRUITNODE_
#define FRUITNODE_

#include "Fruit.h"

typedef struct s_FruitNode FruitNode;


struct s_FruitNode
{
  Fruit const*	elem;
  FruitNode*	next;
};


#endif
