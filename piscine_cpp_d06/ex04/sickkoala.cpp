/**
 * vadee_s
 */

#include <strings.h>
#include "sickkoala.h"

SickKoala::SickKoala(std::string name) : name(name)
{
}

SickKoala::~SickKoala()
{
  std::cout << "Mr." << this->name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

void SickKoala::poke()
{
  std::cout << "Mr." << this->name << ": Gooeeeeerrk !! :'(" << std::endl;
}

bool SickKoala::takeDrug(std::string drug)
{
  if (drug == "Buronzand")
    {
      std::cout << "Mr." << this->name << ": Et la fatigue a fait son temps !" << std::endl;
      return (true);
    }
  else if (strcasecmp(drug.c_str(), "mars") == 0)
    {
      std::cout << "Mr." << this->name << ": Mars, et ca kreog !" << std::endl;
      return (true);
    }
  else
    {
      std::cout << "Mr." << this->name << ": Goerkreog !" << std::endl;
      return (false);
    }
}

void SickKoala::overDrive(std::string kreog)
{
  while (kreog.find("Kreog") != std::string::npos)
    kreog.replace(kreog.find("Kreog"), 5, "1337");
  std::cout << "Mr." << this->name  + ": " << kreog << std::endl;
}

std::string	SickKoala::getName()
{
  return (this->name);
}
