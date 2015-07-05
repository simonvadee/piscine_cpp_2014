/**
 * vadee_s
 */

#include "koalanurselist.h"

KoalaNurseList::KoalaNurseList(KoalaNurse *ptr)
{
  this->node = ptr;
  this->next = NULL;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool	KoalaNurseList::isEnd()
{
  return (this->next == NULL);
}

void	KoalaNurseList::append(KoalaNurseList *ptr)
{
  KoalaNurseList *elem = this;

  while (elem->next)
    {
      if (elem == ptr)
	return;
      elem = elem->next;
    }
  ptr->next = NULL;
  elem->next = ptr;
}

KoalaNurse*	KoalaNurseList::getFromID(int id)
{
  KoalaNurseList *elem = this;

  while (elem)
    {
      if (elem->node->getID() == id)
	return (elem->node);
      elem = elem->next;
    }
  return (NULL);
}

KoalaNurseList*	KoalaNurseList::remove(KoalaNurseList *ptr)
{
  KoalaNurseList *elem = this;
  KoalaNurseList *prev = this;

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

KoalaNurseList*	KoalaNurseList::removeFromID(int id)
{
  KoalaNurseList *elem = this;
  KoalaNurseList *prev = this;

  while (elem)
    {
      if (elem->node->getID() == id)
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

void	KoalaNurseList::dump()
{
  KoalaNurseList *elem = this;

  std::cout << "Liste des infirmieres : ";
  while (elem)
    {
      if (elem->node == NULL)
	std::cout << "[NULL]";
      else
	  std::cout << elem->node->getID();
      if (elem->next)
	std::cout << ", ";
      else
	std::cout << "." << std::endl;
      elem = elem->next;
    }
}

KoalaNurse*	KoalaNurseList::getContent()
{
  return (this->node);
}

KoalaNurseList*	KoalaNurseList::getNext()
{
  return (this->next);
}
