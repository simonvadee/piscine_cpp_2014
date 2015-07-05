/**
 * vadee_s
 */

#ifndef AENEMY_
#define AENEMY_

#include <iostream>

class AEnemy
{
protected:
  
  std::string	_type;
  int		_hp;
  
  
public:
  
  AEnemy(int hp, std::string const & type);
  virtual ~AEnemy();
  std::string const getType() const;
  int getHP() const;
  virtual void takeDamage(int);
};

#endif
