/**
 * vadee_s
 */

#ifndef EVENT_H_
# define EVENT_H_

#include <iostream>
#include <list>

class Event
{
public:

  Event();
  Event(unsigned int i, const std::string&);
  ~Event();
  Event(const Event &);
  Event &operator=(const Event &);

  unsigned int		getTime() const;
  const std::string&	getEvent() const;

  void			setTime(unsigned int);
  void			setEvent(const std::string&);

  private:

  unsigned int	_time;
  std::string	_event;

};

#endif /* !EVENT_H_ */
