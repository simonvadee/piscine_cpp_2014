/**
 * vadee_s
 */

#include "droid.hh"

Droid::Droid(std::string serial) : _serial(serial), _energy(50), _attack(25), _toughness(15), _status(new std::string("Standing by")), _battleData(new DroidMemory)
{
  std::cout << "Droid '" << _serial << "' Activated" << std::endl;
}

Droid::Droid(Droid const& droid) : _serial(droid._serial), _energy(droid._energy), _attack(droid._attack), _toughness(droid._toughness), _status(new std::string(*(droid._status))), _battleData(new DroidMemory)
{
  std::cout << "Droid '" << _serial << "' Activated, Memory Dumped" << std::endl;
}


Droid&	Droid::operator=(Droid const& droid)
{
  if (this != &droid)
    {
      if (this->_status)
	delete this->_status;
      this->_status = new std::string(*(droid._status));
      this->_energy = droid._energy;
      this->_serial = droid._serial;
      if (_battleData)
	delete _battleData;
      _battleData = new DroidMemory(*(droid.getBattleData()));
    }
  return *this;
}

bool	Droid::operator==(Droid const& other) const
{
  return ((*_status == *(other.getStatus())));
}

bool	Droid::operator!=(Droid const& other) const
{
  return ((*_status != *(other.getStatus())));
}

Droid&	Droid::operator<<(size_t& other)
{
  size_t        required = 100 - _energy;

  if (other >= required)
    {
      _energy =100;
      other -= required;
    }
  else
    {
      _energy += other;
      other = 0;
    }
  return *this;
}

std::ostream&	operator<<(std::ostream& os, Droid const& droid)
{
  std::cout << "Droid '" << droid.getId() << "', " << *(droid.getStatus()) << ", " << droid.getEnergy();
  return (os);
}

Droid::~Droid()
{
  if (_status)
    delete _status;
  if (_battleData)
    delete _battleData;
  std::cout << "Droid '" << _serial << "' Destroyed" << std::endl;
}

std::string	Droid::getId() const
{
  return this->_serial;
}

void		Droid::setId(std::string serial)
{
  this->_serial = serial;
}

size_t		Droid::getEnergy() const
{
  return this->_energy;
}

void		Droid::setEnergy(size_t energy)
{
  if (energy > 100)
    energy = 100;
  this->_energy = energy;
}

size_t		Droid::getAttack() const
{
  return this->_attack;
}

size_t		Droid::getToughness() const
{
  return this->_toughness;
}

std::string*	Droid::getStatus() const
{
  return this->_status;
}

void		Droid::setStatus(std::string* status)
{
  if (this->_status)
    delete this->_status;
  this->_status = status;
}

DroidMemory*	Droid::getBattleData() const
{
  return this->_battleData;
}

void		Droid::setBattleData(DroidMemory* other)
{
  if (_battleData)
    delete _battleData;
  this->_battleData = other;
}
