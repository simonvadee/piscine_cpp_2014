/**
 * vadee_s
 */

#include "Skat.h"

Skat::Skat(std::string const& name, int stimPacks) : _name(name), _stimPaks(stimPacks)
{
}

Skat::~Skat()
{
}

int&	Skat::stimPaks()
{
  int& ret = this->_stimPaks;
  return ret;
}

const std::string&	Skat::name()
{
  return this->_name;
}

void	Skat::shareStimPaks(int number, int &stock)
{
  if ((this->_stimPaks - number) >= 0)
    {
      stock += number;
      this->_stimPaks -= number;
      std::cout << "Keep the change." << std::endl; 
    }
  else
    std::cout << "Don't be greedy" << std::endl; 
}

void	Skat::addStimPaks(unsigned int nb)
{
  if (nb)
    this->_stimPaks += nb;
  else
    std::cout << "Hey boya, did you forget something ?" << std::endl;
}

void	Skat::useStimPaks()
{
  if (this->_stimPaks)
    {
      this->_stimPaks -= 1;
      std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    }
  else
    std::cout << "Mediiiiiic" << std::endl;
}

void	Skat::status()
{
  std::cout << "Soldier " << this->name() << " reporting " << this->stimPaks() << " stimpaks remaining sir !" << std::endl;
}
