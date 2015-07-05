/**
 * vadee_s
 */

#include "FruitBox.h"

FruitBox::FruitBox(int size) : _size(size), _list(NULL)
{
}

FruitBox::~FruitBox()
{
  FruitNode*	del;

  while (_list)
    {
      del = _list;
      _list = _list->next;
      delete del;
    }
}

int		FruitBox::nbFruits() const
{
  FruitNode*	tmp = _list;
  int		count = 0;

  while (tmp && tmp->elem != NULL)
    {
      count++;
      tmp = tmp->next;
    }
  return count;
}

bool		FruitBox::putFruit(Fruit const* add)
{
  FruitNode*	tmp = _list;
  FruitNode*	last = new FruitNode;

  last->elem = add;
  last->next = NULL;
  if (nbFruits() >= _size)
    return false;
  else if (tmp == NULL)
    {
      _list = last;
      return true;
    }
  while (tmp->next)
    {
      if (tmp->elem == add)
	return false;
      tmp = tmp->next;
    }
  if (tmp->elem == add)
    return false;
  tmp->next = last;
  return true;
}

Fruit*		FruitBox::pickFruit()
{
  FruitNode*	tmp = _list;
  Fruit const*	ret;
  
  while (tmp)
    {
      if (tmp->elem)
	{
	  ret = tmp->elem;
	  _list = _list->next;
	  delete tmp;
	  return const_cast<Fruit*>(ret);
	}
      tmp = tmp->next;
    }
  return NULL;
}

FruitNode*		FruitBox::head() const
{
  return _list;
}
