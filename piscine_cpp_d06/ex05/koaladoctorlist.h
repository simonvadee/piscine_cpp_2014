/**
 * vadee_s
 */

#ifndef KOALADOCTORLIST_
# define KOALADOCTORLIST_

#include "koaladoctor.h"

class	KoalaDoctorList
{
 public:
  
  KoalaDoctorList(KoalaDoctor *ptr);
  ~KoalaDoctorList();
  bool	isEnd();
  void	append(KoalaDoctorList *ptr);
  KoalaDoctor *getFromName(std::string name);
  KoalaDoctorList *remove(KoalaDoctorList *ptr);
  KoalaDoctorList *removeFromName(std::string name);
  void	dump();
  KoalaDoctor *getContent();
  KoalaDoctorList *getNext();
  
 private:

  KoalaDoctor *node;
  KoalaDoctorList *next;
  
};

#endif /* ! KOALADOCTORLIST_ */
