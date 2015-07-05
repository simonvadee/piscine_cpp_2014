/**
 * vadee_s
 */

#include "Event.h"

Event::Event() : _time(0)
{

}

Event::Event(unsigned int i, const std::string& elem) : _time(i), _event(elem)
{

}

Event::~Event()
{

}

Event::Event(const Event& other) : _time(other._time), _event(other._event)
{

}

Event&			Event::operator=(const Event & other)
{
  _time = other._time;
  _event = other._event;
  return *this;
}

unsigned int		Event::getTime() const
{
  return _time;
}

const std::string&	Event::getEvent() const
{
  return _event;
}

void			Event::setTime(unsigned int time)
{
  _time = time;
}

void			Event::setEvent(const std::string & event)
{
  _event = event;
}
