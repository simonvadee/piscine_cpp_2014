/**
 * vadee_s
 */

#include "sickkoalalist.h"

SickKoalaList::SickKoalaList(SickKoala *ptr)
{
  this->node = ptr;
  this->next = NULL;
}

SickKoalaList::~SickKoalaList()
{
}

bool	SickKoalaList::isEnd()
{
  return (this->next == NULL);
}

void	SickKoalaList::append(SickKoalaList *ptr)
{
  SickKoalaList *elem = this;

  while (elem->next)
    {
      if (elem == ptr)
	return;
      elem = elem->next;
    }
  ptr->next = NULL;
  elem->next = ptr;
}

SickKoala*	SickKoalaList::getFromName(std::string name)
{
  SickKoalaList *elem = this;

  while (elem)
    {
      if (elem->node->getName() == name)
	return (elem->node);
      elem = elem->next;
    }
  return (NULL);
}

SickKoalaList*	SickKoalaList::remove(SickKoalaList *ptr)
{
  SickKoalaList *elem = this;
  SickKoalaList *prev = this;

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

SickKoalaList*	SickKoalaList::removeFromName(std::string name)
{
  SickKoalaList *elem = this;
  SickKoalaList *prev = this;

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

void	SickKoalaList::dump()
{
  SickKoalaList *elem = this;

  std::cout << "Liste des patients : ";
  while (elem)
    {
      if (elem->node->getName().c_str() == NULL)
	std::cout << "NULL";
      else
	std::cout << elem->node->getName();
      if (elem->next)
	std::cout << ", ";
      else
	std::cout << "." << std::endl;
      elem = elem->next;
    }
}

SickKoala*	SickKoalaList::getContent()
{
  return (this->node);
}

SickKoalaList*	SickKoalaList::getNext()
{
  return (this->next);
}
