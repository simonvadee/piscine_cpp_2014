/**
 * vadee_s
 */

#include "Buzz.h"

Buzz::Buzz(std::string const& name) : Toy(BUZZ, name, "buzz.txt")
{
}

Buzz::Buzz(std::string const& name, std::string const& file) : Toy(BUZZ, name, file)
{
}

Buzz::~Buzz()
{
}

bool			Buzz::speak(std::string const& statement)
{
  std::cout << "BUZZ: " <<  _name << " \"" << statement << "\"" << std::endl;
  return true;
}

bool			Buzz::speak_es(std::string const& statement)
{
  std::cout << "BUZZ: " <<  _name <<  " senorita \"" << statement << "\" senorita" << std::endl;
  return true;
}
