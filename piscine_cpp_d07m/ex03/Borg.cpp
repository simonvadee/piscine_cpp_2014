/**
 * vadee_s
 */

#include "Borg.hh"

// class	Borg::Ship
namespace Borg
{

  Ship::Ship(int wF, short repair)
  {
    this->_side = 300;
    this->_maxWarp = 9;
    this->_home = UNICOMPLEX;
    this->_location = this->_home;
    this->_weaponFrequency = wF;
    this->_repair = repair;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
  }
  
  Ship::Ship(int wF)
  {
    this->_side = 300;
    this->_maxWarp = 9;
    this->_home = UNICOMPLEX;
    this->_location = this->_home;
    this->_weaponFrequency = wF;
    this->_repair = 3;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
  }

  Ship::~Ship()
  {
  }

  void	Ship::setupCore(WarpSystem::Core* ptr)
  {
    this->_core = ptr;
  }

  void	Ship::checkCore()
  {
    std::cout << (this->_core->checkReactor()->isStable() ? "Everything is in order." : "Critical failure imminent") << std::endl;
  }

  bool	Ship::move(int warp, Destination d)
  {
    if ((warp <= this->_maxWarp)
	&& (d != this->_location)
	&& (this->_core->checkReactor()->isStable())
	)
      {
	this->_location = d;
	return true;
      }
    return false;
  }
    
  bool	Ship::move(int warp)
  {
    if ((warp <= this->_maxWarp)
	&& (this->_core->checkReactor()->isStable())
	)
      {
	this->_location = this->_home;
	return true;
      }
    return false;
  }
    
  bool	Ship::move(Destination d)
  {
    if ((d != this->_location)
	&& (this->_core->checkReactor()->isStable())
	)
      {
	this->_location = d;
	return true;
      }
    return (false);
  }
    
  bool	Ship::move()
  {
    if (this->_core->checkReactor()->isStable())
      {
	this->_location = this->_home;
	return (true);
      }
    return (false);
  }

  int         Ship::getShield()
  {
    return (this->_shield);
  }

  void        Ship::setShield(int shield)
  {
    this->_shield = shield;
  }

  int         Ship::getWeaponFrequency()
  {
    return (this->_weaponFrequency);
  }

  void        Ship::setWeaponFrequency(int fq)
  {
    this->_weaponFrequency = fq;
  }

  short       Ship::getRepair()
  {
    return (this->_repair);
  }
  
  void		Ship::fire(Federation::Starfleet::Ship* target)
  {
    std::cout << "Firing on target with " << this->_weaponFrequency << "GW frequency." << std::endl;
    target->setShield((target->getShield() - (this->_weaponFrequency)));
  }

  void		Ship::fire(Federation::Ship* target)
  {
    std::cout << "Firing on target with " << this->_weaponFrequency << "GW frequency." << std::endl;
    target->getCore()->checkReactor()->setStability(false);
  }

  void		Ship::repair()
  {
    if (this->_repair > 0)
      {
	std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
	this->_repair -= 1;
	this->_shield = 100;
      }
    else
      {
	std::cout << "Energy cells depleted, shield weakening." << std::endl;
      }
  }
}
