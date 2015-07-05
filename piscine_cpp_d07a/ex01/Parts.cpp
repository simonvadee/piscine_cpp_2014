/**
 * vadee_s
 */

#include "Parts.h"

/**
 * Arms
 */

Arms::Arms(std::string serial, bool functional) : _serial(serial), _functional(functional)
{
}

Arms::~Arms()
{
}

bool	Arms::isFunctional() const
{
  return this->_functional;
}

std::string	Arms::serial() const
{
  return this->_serial;
}

void	Arms::informations() const
{
  std::cout << "\t[Parts] Arms " << this->_serial << " status : " << (this->isFunctional() ? "OK" : "KO") << std::endl;
}

/**
 * Legs
 */


Legs::Legs(std::string serial, bool functional) : _serial(serial), _functional(functional)
{
}

Legs::~Legs()
{
}

bool   Legs::isFunctional() const
{
  return this->_functional;
}

std::string	Legs::serial() const
{
  return this->_serial;
}

void    Legs::informations() const
{
  std::cout << "\t[Parts] Legs " << this->_serial << " status : " << (this->isFunctional() ? "OK" : "KO") << std::endl;
}

/**
 * Head
 */

Head::Head(std::string serial, bool functional) : _serial(serial), _functional(functional)
{
}

Head::~Head()
{
}

bool	Head::isFunctional() const
{
  return this->_functional;
}

std::string	Head::serial() const
{
  return this->_serial;
}

void	Head::informations() const
{
  std::cout << "\t[Parts] Head " << this->_serial << " status : " << (this->isFunctional() ? "OK" : "KO") << std::endl;
}

