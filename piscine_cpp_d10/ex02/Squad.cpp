/**
 * vadee_s
 */

#include "Squad.hh"

Squad::Squad() : _units(0), _array(new ISpaceMarine*)
{
}

Squad::~Squad()
{
}

int	Squad::getCount() const
{
  return _units;
}

ISpaceMarine*	Squad::getUnit(int i)
{
  if (i < 0 || i > _units)
    return NULL;
  return _array[i];
}

int		Squad::push(ISpaceMarine* elem)
{
  if (!elem)
    return _units;
  for (int i = 0; i != _units; i++)
    {
      if (_array[i] == elem)
	return _units;
    }
  _array[_units] = new ISpaceMarine(elem);
  _units++;
  return _units;
}

