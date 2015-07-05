/**
 *
 */

#ifndef FRUITBOX_
#define FRUITBOX_

#include "Fruit.h"
#include "FruitNode.h"

class		FruitBox
{

 public:

  FruitBox(int const size);
  ~FruitBox();

  int		nbFruits() const;
  bool		putFruit(Fruit const* f);
  Fruit*	pickFruit();
  FruitNode*	head() const;
 
 private:

  int		_size;
  FruitNode*	_list;
};

#endif
