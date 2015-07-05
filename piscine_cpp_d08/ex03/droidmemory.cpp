/**
 * vadee_s
 */

#include <stdlib.h>
#include "droidmemory.hh"

DroidMemory::DroidMemory() : _fingerPrints(random()), _exp(0)
{
}

bool		DroidMemory::operator==(DroidMemory const& other) const
{
  return ((_exp == other._exp)
	  && (_fingerPrints == other._fingerPrints)
	  );
}

bool		DroidMemory::operator!=(DroidMemory const& other) const
{
  return (!(*this == other));
}

bool		DroidMemory::operator>(DroidMemory const& other) const
{  
  return (_exp > other._exp);
}

bool		DroidMemory::operator>(size_t const& other) const
{
  return (_exp > other);
}

bool		DroidMemory::operator>=(DroidMemory const& other) const
{  
  return (_exp >= other._exp);
}

bool		DroidMemory::operator>=(size_t const& other) const
{
  return (_exp >= other);
}

bool		DroidMemory::operator<(DroidMemory const& other) const
{  
  return (_exp < other._exp);
}

bool		DroidMemory::operator<(size_t const& other) const
{
  return (_exp < other);
}

bool		DroidMemory::operator<=(DroidMemory const& other) const
{  
  return (_exp <= other._exp);
}

bool		DroidMemory::operator<=(size_t const& other) const
{
  return (_exp <= other);
}

DroidMemory&	DroidMemory::operator<<(DroidMemory const& other)
{
  _exp += other.getExp();
  _fingerPrints ^= other.getFingerPrints();
  return *this;
}

DroidMemory const& DroidMemory::operator>>(DroidMemory& other)
{
  other.setExp(other.getExp() + _exp);
  other.setFingerPrints(other.getFingerPrints()^_fingerPrints);
  return *this;
}

DroidMemory&	DroidMemory::operator+=(DroidMemory const& other)
{
  return (*this << other);
}

DroidMemory&	DroidMemory::operator+=(size_t const other)
{
  _exp += other;
  _fingerPrints ^= other;
  return *this;
}

DroidMemory	DroidMemory::operator+(DroidMemory const& other) const
{
  DroidMemory ret;
  
  ret.setExp(_exp + other.getExp());
  ret.setFingerPrints(_fingerPrints^other.getFingerPrints());
  return ret;
}

DroidMemory	DroidMemory::operator+(size_t const other) const
{  
  DroidMemory ret;
  
  ret.setExp(_exp + other);
  ret.setFingerPrints(_fingerPrints^other);
  return ret;
}

DroidMemory::~DroidMemory()
{
}

size_t	DroidMemory::getFingerPrints() const
{
  return this->_fingerPrints;
}

void	DroidMemory::setFingerPrints(size_t fingerPrints)
{
  this->_fingerPrints = fingerPrints;
}

size_t	DroidMemory::getExp() const
{
  return this->_exp;
}

void	DroidMemory::setExp(size_t exp)
{
  this->_exp = exp;
}

std::ostream&	operator<<(std::ostream& os, DroidMemory const& droid)
{
  std::cout << "DroidMemory '" << droid.getFingerPrints() << "', " << droid.getExp();
    return os;
}
