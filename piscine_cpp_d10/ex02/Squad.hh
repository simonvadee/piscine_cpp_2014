/**
 * vadee_s
 */

#ifndef SQUAD_
#define SQUAD_

#include <iostream>
#include "ISquad.hh"

class		Squad : public ISquad
{
private:

  int		_units;
  ISpaceMarine** _array;
  
public:

  Squad();
  virtual ~Squad();
  virtual int getCount() const;
  virtual ISpaceMarine* getUnit(int);
  virtual int push(ISpaceMarine*);

};

#endif
