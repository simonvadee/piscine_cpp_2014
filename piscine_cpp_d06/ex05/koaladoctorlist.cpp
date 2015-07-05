/**
 * vadee_s
 */

#include "koaladoctorlist.h"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *ptr)
{
  this->node = ptr;
  this->next = NULL;
}

KoalaDoctorList::~KoalaDoctorList()
{
}

bool	KoalaDoctorList::isEnd()
{
  return (this->next == NULL);
}

void	KoalaDoctorList::append(KoalaDoctorList *ptr)
{
  KoalaDoctorList *elem = this;

  while (elem->next)
    {
      if (elem == ptr)
	return;
      elem = elem->next;
    }
  ptr->next = NULL;
  elem->next = ptr;
}

KoalaDoctor*	KoalaDoctorList::getFromName(std::string name)
{
  KoalaDoctorList *elem = this;

  while (elem)
    {
      if (elem->node->getName() == name)
	return (elem->node);
      elem = elem->next;
    }
  return (NULL);
}

KoalaDoctorList*	KoalaDoctorList::remove(KoalaDoctorList *ptr)
{
  KoalaDoctorList *elem = this;
  KoalaDoctorList *prev = this;

  while (elem)
    {
      if (elem == ptr)
	{
	  if (prev == elem)
	    return (this->next);
	  else
	    {
	      prev->next = elem->next;
	      return (this);
	    }
	}
      prev = elem;
      elem = elem->next;
    }
  return (this);
}

KoalaDoctorList*	KoalaDoctorList::removeFromName(std::string name)
{
  KoalaDoctorList *elem = this;
  KoalaDoctorList *prev = this;

  while (elem)
    {
      if (elem->node->getName() == name)
	{
	  if (prev == elem)
	    return (this->next);
	  else
	    {
	      prev->next = elem->next;
	      return (this);
	    }
	}
      prev = elem;
      elem = elem->next;
    }
  return (this);  
}

void	KoalaDoctorList::dump()
{
  KoalaDoctorList *elem = this;

  std::cout << "Liste des medecins : ";
  while (elem)
    {
      if (elem->node->getName().c_str() == NULL)
	std::cout << "[NULL]";
      else
	std::cout << elem->node->getName();
      if (elem->next)
	std::cout << ", ";
      else
	std::cout << "." << std::endl;
      elem = elem->next;
    }
}

KoalaDoctor*	KoalaDoctorList::getContent()
{
  return (this->node);
}

KoalaDoctorList*	KoalaDoctorList::getNext()
{
  return (this->next);
}
