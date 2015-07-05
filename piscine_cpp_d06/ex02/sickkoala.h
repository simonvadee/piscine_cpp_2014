/**
 * vadee_s
 */

#ifndef SICKOALA_
# define SICKOALA_

#include <iostream>

class SickKoala
{
 public:

  SickKoala(std::string namecd);
  ~SickKoala();
  void	poke();
  bool	takeDrug(std::string drug);
  void	overDrive(std::string kreog);

 private:

  std::string	name;
};

#endif /* SICKKOALA_ */
