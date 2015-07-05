/**
 * vadee_s
 */

#ifndef CARRIER_
#define CARRIER_

#include <iostream>
#include "droid.hh"

class	Carrier
{

public:

  Carrier(std::string id);
  ~Carrier();
  Carrier&	operator<<(Droid*& droid);
  Carrier&	operator<<(size_t nb);
  Carrier&	operator>>(Droid*& droid);
  Droid*	operator[](int i) const;
  void		operator~();
  bool		operator()(int x, int y);
  Carrier&	operator<<(size_t& other);

  std::string	getId();
  void		setId();

  
private:

  std::string	_id;
  size_t	_energy;
  size_t const	_attack;
  size_t const	_toughness;
  size_t	_speed;
  Droid*	_droids[5];
  
};

std::ostream&	operator<<(std::ostream& os, Carrier const& carrier);

#endif
