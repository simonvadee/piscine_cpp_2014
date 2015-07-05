/**
 * vadee_s
 */

#ifndef EVENTMANAGER_H_
# define EVENTMANAGER_H_

#include "Event.h"

class EventManager
{
public:
  EventManager();
  ~EventManager();
  EventManager(const EventManager &);
  EventManager &operator=(const EventManager &);

  void		addEvent(const Event&);

  void		removeEventsAt(unsigned int);

  void		dumpEvents(void) const;

  void		dumpEventAt(unsigned int) const;

  void		addTime(unsigned int);

  void		addEventList(std::list<Event>&);

  private:

  std::list<Event>		_events;
  unsigned int			_time;

};
#endif /* !EVENTMANAGER_H_ */
