/**
 * vadee_s
 */

#ifndef DROID_
#define DROID_

#include <iostream>
#include "droidmemory.hh"

class	Droid
{
  
public:

  Droid(std::string serial);
  Droid(Droid const& droid);
  bool		operator()(std::string const* task, size_t required);
  Droid&	operator=(Droid const& droid);
  bool		operator==(Droid const& other) const;	
  bool		operator!=(Droid const& other) const;	
  Droid&	operator<<(size_t& other);
  ~Droid();

  std::string	getId() const;
  void		setId(std::string);
  
  size_t	getEnergy() const;
  void		setEnergy(size_t);

  size_t	getAttack() const;

  size_t	getToughness() const;

  std::string*	getStatus() const;
  void		setStatus(std::string*);
  
  DroidMemory*	getBattleData() const;
  void		setBattleData(DroidMemory* other);

private:

  std::string	_serial;
  size_t	_energy;
  size_t const	_attack;
  size_t const	_toughness;
  std::string*	_status; 
  DroidMemory*	_battleData;
};

std::ostream& operator<<(std::ostream& os, Droid const& droid);

#endif
