/**
 * vadee_s
 */

#ifndef SORCERER_
#define SORCERER_

#include <iostream>
#include "Victim.hh"

class	Sorcerer
{

public:

  Sorcerer(std::string name, std::string title);
  ~Sorcerer();

  std::string	getName() const;
  std::string	getTitle() const;

  void		polymorph(Victim const&) const;
  
private:

  std::string	_name;
  std::string	_title;
  
};

std::ostream&	operator<<(std::ostream& os, Sorcerer const& sorcerer);

#endif
