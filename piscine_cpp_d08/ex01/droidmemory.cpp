/**
 * vadee_s
 */

#include <cstdlib>
#include "droidmemory.hh"

DroidMemory::DroidMemory() : _fingerPrints(random()), _exp(0)
{
}

DroidMemory&	DroidMemory::operator<<(DroidMemory const& other)
{
  _exp += other.getExp();
  _fingerPrints ^= other.getFingerPrint();
  return *this;
}

DroidMemory const& DroidMemory::operator>>(DroidMemory& other)
{
  other.setExp(other.getExp() + _exp);
  other.setFingerPrint(other.getFingerPrint()^_fingerPrints);
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
  ret.setFingerPrint(_fingerPrints^other.getFingerPrint());
  return ret;
}

DroidMemory	DroidMemory::operator+(size_t const other) const
{  
  DroidMemory ret;
  
  ret.setExp(_exp + other);
  ret.setFingerPrint(_fingerPrints^other);
  return ret;
}

DroidMemory::~DroidMemory()
{
}

size_t	DroidMemory::getFingerPrint() const
{
  return this->_fingerPrints;
}

void	DroidMemory::setFingerPrint(size_t fingerPrints)
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
  std::cout << "DroidMemory '" << droid.getFingerPrint() << "', " << droid.getExp();
    return os;
}
