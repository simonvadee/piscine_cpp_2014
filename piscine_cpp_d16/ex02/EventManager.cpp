/**
 *
 */

#include "EventManager.h"

EventManager::EventManager() : _time(0)
{

}

EventManager::~EventManager()
{

}

EventManager::EventManager(const EventManager& other) : _events(other._events), _time(other._time)
{

}

EventManager&		EventManager::operator=(const EventManager & other)
{
  _events = other._events;
  _time = other._time;
  return *this;
}

void			EventManager::addEvent(const Event & event)
{
  if (event.getTime() < _time)
    return;
  if (!(_events.size()))
    {
      _events.push_back(event);
     return;
    }
  for (std::list<Event>::iterator it = _events.begin(); it != _events.end(); it++)
    {
      if (event.getTime() <= it->getTime())
	{
	  if (event.getTime() == it->getTime())
	    {
	      while (event.getTime() == it->getTime())
		++it;
	      _events.insert(it, event);
	    }
	  else
	    _events.insert(it, event);
	  return;
	}
    }
  _events.push_back(event);
}

void			EventManager::removeEventsAt(unsigned int time)
{
  for (std::list<Event>::iterator it = _events.begin(); it != _events.end(); it++)
    {
      if (it->getTime() == time)
	{
	  _events.erase(it);
	  it = _events.begin();
	}
    }
}

void			EventManager::dumpEvents() const
{
  for (std::list<Event>::const_iterator it = _events.begin(); it != _events.end(); it++)
    std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
}

void			EventManager::dumpEventAt(unsigned int time) const
{
  for (std::list<Event>::const_iterator it = _events.begin(); it != _events.end(); it++)
    {
      if (it->getTime() == time)
	std::cout << it->getTime() << ": " << it->getEvent() << std::endl;
    }
}

void			EventManager::addTime(unsigned int time)
{
  unsigned int		ex = _time;

  _time += time;
  for (std::list<Event>::iterator it = _events.begin(); it != _events.end(); it++)
    {
      if (it->getTime() <= _time && it->getTime() >= ex)
	{
	  std::cout << it->getEvent() << std::endl;
	  _events.erase(it);
	  it = _events.begin();
	  it--;
	}
    }
}

void			EventManager::addEventList(std::list<Event> &list)
{
  for (std::list<Event>::iterator it = list.begin(); it != list.end(); it++)
    addEvent(*it);
}
