/**
 * vadee_s
 */

#ifndef KOALANURSE_
# define KOALANURSE_

#include <iostream>
#include "sickkoala.h"

class KoalaNurse
{
 public:

  KoalaNurse(int id);
  ~KoalaNurse();
  void	giveDrug(std::string drug, SickKoala *patient);
  std::string	readReport(std::string file);
  void	timeCheck();
  
 private:

    bool	working;
    int		id;
};

#endif /* KOALANURSE_ */
