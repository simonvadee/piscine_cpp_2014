/**
 * vadee_s
 */

#ifndef KOALANURSELIST_
# define KOALANURSELIST_

#include "koalanurse.h"

class	KoalaNurseList
{
 public:
  
  KoalaNurseList(KoalaNurse *ptr);
  ~KoalaNurseList();
  bool	isEnd();
  void	append(KoalaNurseList *ptr);
  KoalaNurse *getFromID(int id);
  KoalaNurseList *remove(KoalaNurseList *ptr);
  KoalaNurseList *removeFromID(int id);
  void	dump();
  KoalaNurse *getContent();
  KoalaNurseList *getNext();
  
 private:

  KoalaNurse *node;
  KoalaNurseList *next;
  
};

#endif /* ! KOALANURSELIST_ */
