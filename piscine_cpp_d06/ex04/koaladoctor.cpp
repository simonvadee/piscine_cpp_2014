/**
 * vadee_s
 */

#include <stdlib.h>
#include <fstream>
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
  this->name = name;
  this->working = false;
  std::cout << "Dr." << this->name << ": Je suis le Dr." << this->name << " ! Comment Kreoggez-vous ?" << std::endl;}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
  std::ofstream	myStream((patient->getName() + ".report").c_str());
  std::string	drugList[5] = {"mars", "Buronzand", "Viagra", "Extasy", "Feuille d'eucalyptus"} ;
  std::string	patientName;

  std::cout << "Dr." << this->name << ": Alors qu'est-ce qui vous goerk Mr." << patient->getName() << " ?" << std::endl;
  patient->poke();
  if (myStream)
    myStream << drugList[random() % 5];
}

void	KoalaDoctor::timeCheck()
{
  working = !working;
  if (working)
    std::cout << "Dr." << this->name << ": Je commence le travail !" << std::endl;
  else
    std::cout << "Dr." << this->name << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
}
