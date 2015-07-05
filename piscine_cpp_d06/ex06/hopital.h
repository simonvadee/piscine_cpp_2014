/*
 * vadee_s
 */

#ifndef HOPITAL_
#define HOPITAL_

#include "sickkoalalist.h"
#include "koalanurselist.h"
#include "koaladoctorlist.h"

class Hospital
{
 public:
  
  Hospital();
  ~Hospital();
  void	addDoctor(KoalaDoctorList *doc);
  void	addNurse(KoalaNurseList *inf);
  void	addSick(SickKoalaList *patient);
  void	run();
  
 private:

  SickKoalaList *listSick;
  KoalaDoctorList *listDoctor;
  KoalaNurseList *listNurse;
};

#endif /* ! HOPITAL_ */
