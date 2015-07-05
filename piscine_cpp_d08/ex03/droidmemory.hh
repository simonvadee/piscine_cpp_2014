/**
 * vadee_s
 */

#ifndef DROIDMEMORY_
#define DROIDMEMORY_

#include <iostream>

class	DroidMemory
{
public:
  DroidMemory();
  
  bool		operator==(DroidMemory const& other) const;
  bool		operator!=(DroidMemory const& other) const;
  bool		operator>(DroidMemory const& other) const;
  bool		operator>(size_t const& other) const;
  bool		operator>=(DroidMemory const& other) const;
  bool		operator>=(size_t const& other) const;
  bool		operator<(DroidMemory const& other) const;
  bool		operator<(size_t const& other) const;
  bool		operator<=(DroidMemory const& other) const;
  bool		operator<=(size_t const& other) const;
  DroidMemory&	operator<<(DroidMemory const& other);
  DroidMemory const&	operator>>(DroidMemory& other);
  DroidMemory& operator+=(DroidMemory const& other);
  DroidMemory& operator+=(size_t const other);
  DroidMemory 	operator+(DroidMemory const& other) const;
  DroidMemory	operator+(size_t const other) const;
  ~DroidMemory();
  
  size_t	getFingerPrints() const;
  void		setFingerPrints(size_t fingerPrints);

  size_t	getExp() const;
  void		setExp(size_t exp);
  
private:

  size_t	_fingerPrints;
  size_t	_exp;
  
};

std::ostream& operator<<(std::ostream& os, DroidMemory const& droid);

#endif
