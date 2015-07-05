/**
 * vadee_s
 */

#ifndef SICKKOALALIST_
# define SICKKOALALIST_

#include "sickkoala.h"

class	SickKoalaList
{
 public:
  
  SickKoalaList(SickKoala *ptr);
  ~SickKoalaList();
  bool	isEnd();
  void	append(SickKoalaList *ptr);
  SickKoala *getFromName(std::string name);
  SickKoalaList *remove(SickKoalaList *ptr);
  SickKoalaList *removeFromName(std::string name);
  void	dump();
  SickKoala *getContent();
  SickKoalaList *getNext();
  
 private:

  SickKoala *node;
  SickKoalaList *next;
  
};

#endif /* ! SICKKOALALIST_ */
