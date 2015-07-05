/**
 * vadee_s
 */

#include <cstdlib>
#include "carrier.hh"

Carrier::Carrier(std::string id) : _id(id), _energy(300), _attack(100), _toughness(90), _speed(0)
{
  for (int i = 0; i != 5; i++)
    {
      _droids[i] = NULL;
    }
}

Carrier::~Carrier()
{
  for (int i = 0; i != 5; i++)
    {
      if (_droids[i])
	delete _droids[i];
    }
}

Carrier&	Carrier::operator<<(Droid*& droid)
{
  for (int i = 0; i != 5; i++)
    {
      if (!(_droids[i]) && droid)
	{
	  if (i == 0)
	    _speed = 100;
	  _droids[i] = droid;
	  droid = NULL;
	  _speed -= 10;
	}
    }
  return *this;
}

Carrier&	Carrier::operator>>(Droid*& droid)
{
  for (int i = 4; i != -1; i--)
    {
      if (!(_droids[i]) && droid)
	_droids[i] = droid;
    }
  return *this;
}

Droid*		Carrier::operator[](int i) const
{
  return _droids[i];
}

void		Carrier::operator~()
{
  int	count = 0;
  
  for (int i = 0; i != 5; i++)
    {
      if (!(_droids[i]))
	count++;
    }
  _speed = 100 - (10 * count);
}

bool		Carrier::operator()(int x, int y)
{
  size_t required;
  int	 count = 0;
  
  for (int i = 0; i != 5; i++)
    {
      if (!(_droids[i]))
	count++;
    }
  required = (abs(x) + abs(y)) * (10 + count);
  if (_speed <= 0 || required > _energy)
    return false;
  else
    return true;
}

Carrier&	Carrier::operator<<(size_t& other)
{
  size_t        required = 600 - _energy;

  if (other >= required)
    {
      _energy =100;
      other -= required;
    }
  else
    {
      _energy += other;
      other = 0;
    }
  return *this;
}

std::ostream&	operator<<(std::ostream& os, Carrier const& carrier)
{
  std::cout << "Carrier ’" << carrier.getId() << "’ Droid(s) on-board:";
  for (int i = 0; i != 5; i++)
    {
      if (carrier[i])
 	std::cout << '[' << i << "] : Droid '" << carrier[i] << "', Standing by, " << carrier[i]->getEnergy() << std::endl;
      else
	std::cout << '[' << i << "] : Free" << std::endl;
    }
  std::cout << "Speed : " << carrier.getSpeed() << ", Energy " << carrier.getEnergy() << std::endl;
  return os;
}

