/**
 * vadee_s
 */

#ifndef SICKOALA_
# define SICKOALA_

#include <iostream>

class SickKoala
{
 public:

  SickKoala(std::string name);
  ~SickKoala();
  void	poke();
  bool	takeDrug(std::string drug);
  void	overDrive(std::string kreog);
  std::string	getName();
  
 private:

  std::string	name;
};

#endif /* SICKKOALA_ */
