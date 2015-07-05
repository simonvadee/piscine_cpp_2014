/**
 * vadee_s
 */

#include "Victim.hh"

Victim::Victim(std::string name) : _name(name)
{
  std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::~Victim()
{
  std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

std::string	Victim::getName() const
{
  return _name;
}

void		Victim::getPolymorphed() const
{
  std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, Victim const& victim)
{
  os << "I'm " << victim.getName() << " and i like otters !" << std::endl;
  return os;
}
