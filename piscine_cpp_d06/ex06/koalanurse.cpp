/**
 * vadee_s
 */

#include <fstream>
#include "koalanurse.h"

KoalaNurse::KoalaNurse(int id)
{
  this->id = id;
  this->working = false;
}

KoalaNurse::~KoalaNurse()
{
  std::cout << "Nurse " << this->id << ": Enfin un peu de repos !" << std::endl;
}

void	KoalaNurse::giveDrug(std::string drug, SickKoala *patient)
{
  patient->takeDrug(drug);
}

std::string	KoalaNurse::readReport(std::string file)
{
  std::ifstream	myStream(file.c_str());
  std::string	drug("");
  std::string	patientName;

  if (myStream)
    {
      patientName = file.substr(0, file.rfind(".report"));
      getline(myStream, drug);
      std::cout << "Nurse " << this->id << ": Kreog ! Il faut donner un " << drug << " a Mr." << patientName << " !" << std::endl;
    }
  return (drug);
}

void	KoalaNurse::timeCheck()
{
  working = !working;
  if (working)
    std::cout << "Nurse " << this->id << ": Je commence le travail !" << std::endl;
  else
    std::cout << "Nurse " << this->id << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
}

int	KoalaNurse::getID()
{
  return (this->id);
}
