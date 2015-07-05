/**
 * vadee_s
 */

#include "Borg.hh"

namespace	Borg
{

  Ship::Ship()
  {
    this->_side = 300;
    this->_maxWarp = 9;
    this->_home = UNICOMPLEX;
    this->_location = this->_home;
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
    std::cout << (this->_core->checkReactor()->isStable() ? "Everything is in order" : "Critical failure imminent") << std::endl;
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

}
