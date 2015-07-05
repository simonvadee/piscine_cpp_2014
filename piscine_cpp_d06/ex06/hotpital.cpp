/**
 * vadee_s
 */

#include "hopital.h"

Hospital::Hospital()
{
}

Hospital::~Hospital()
{
}

void	Hospital::addDoctor(KoalaDoctorList *doc)
{
  
  std::cout << "[HOSPITAL] Doctor " << doc->getContent()->getName() << " just arrived !" << std::endl;
  doc->getContent()->timeCheck();
}

void	Hospital::addNurse(KoalaNurseList *inf)
{
  std::cout << "[HOSPITAL] Nurse " << inf->getContent()->getID() << " just arrived !" << std::endl;
  inf->getContent()->timeCheck();
}

void	Hospital::addSick(SickKoalaList *patient)
{
  std::cout << "[HOSPITAL] Patient " << patient->getContent()->getName() << " just arrived !" << std::endl;
}

void	Hospital::run()
{
  ;
}
