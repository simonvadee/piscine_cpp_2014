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

}
