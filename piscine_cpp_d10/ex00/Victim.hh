/**
 * vadee_s
 */

#ifndef VICTIM_
#define VICTIM_

#include <iostream>

class	Victim
{

public:

  Victim(std::string name);
  virtual ~Victim();

  std::string	getName() const;
  virtual void	getPolymorphed() const;
  
protected:

  std::string	_name;
  
};

std::ostream&	operator<<(std::ostream& os, Victim const& victim);

#endif
