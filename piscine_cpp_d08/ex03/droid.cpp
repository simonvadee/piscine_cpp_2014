/**
 * vadee_s
 */

#include "droid.hh"

Droid::Droid(std::string serial) : _serial(serial), _energy(50), _attack(25), _toughness(15), _status(new std::string("Standing by")), _battleData(new DroidMemory)
{
  std::cout << "Droid '" << _serial << "' Activated" << std::endl;
}

Droid::Droid(Droid const& droid) : _serial(droid._serial), _energy(50), _attack(25), _toughness(15), _status(new std::string(*(droid._status))), _battleData(new DroidMemory(*(droid._battleData)))
{
  std::cout << "Droid '" << _serial << "' Activated, Memory Dumped" << std::endl;
}

bool	Droid::operator()(std::string const* task, size_t required)
{
  std::string	stat[3] = {"Battery Low", *task + " - Completed!", *task + " - Failed!"};

  if (task)
    delete task;
  if (_energy <= 10)
    {
      _energy = 0;
      this->setStatus(new std::string(stat[0]));
      return (false);
    }
  else
    {
      _energy -= 10;
      if (_battleData->getExp() >= required)
	{
	  _battleData->setExp(_battleData->getExp() + required/2);
	  this->setStatus(new std::string(stat[1]));
	  return (true);
	}
      else
	{
	  _battleData->setExp(_battleData->getExp() + required);
	  this->setStatus(new std::string (stat[2]));
	  return (false);
	}
    }
}

Droid&	Droid::operator=(Droid const& droid)
{
  if (this != &droid)
    {
      if (this->_status)
	delete this->_status;
      this->_status = new std::string(*(droid._status));
      this->_energy = 50;
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
