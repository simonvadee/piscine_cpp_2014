/**
 * vadee_s
 */

#include "Federation.hh"

namespace Federation
{
  namespace Starfleet
  {
    Ship::Ship(int length, int width, std::string name, short maxWarp)
    {
      this->_length = length;
      this->_width = width;
      this->_name = name;
      this->_maxWarp = maxWarp;
      std::cout << "The ship USS " << this->_name << " has been finished. It is " << this->_length << " m in length and " << this->_width << " m in width.\nIt can go to Warp " << this->_maxWarp << "!" << std::endl;
    }
    
    Ship::~Ship()
    {
    }

    void	Ship::setupCore(WarpSystem::Core* ptr)
    {
      std::cout << "USS " << this->_name << ": The core is set." << std::endl;
      this->_core = ptr;
    }

    void	Ship::checkCore()
    {
      std::cout << "USS " << this->_name << ": The core is " << (this->_core->checkReactor()->isStable() ? "stable" : "unstable") << " at the time." << std::endl;
    }
  }

  Ship::Ship(int length, int width, std::string name)
  {
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = 1;
    std::cout << "The independant ship " << this->_name << " just finished its construction. It is " << this->_length << " m in length and " << this->_width << " m in width." << std::endl;
  }

  Ship::~Ship()
  {
  }
  
  void	Ship::setupCore(WarpSystem::Core* ptr)
  {
    std::cout << this->_name << ": The core is set." << std::endl;
    this->_core = ptr;
  }

  void	Ship::checkCore()
  {
    std::cout <<  this->_name << ": The core is " << (this->_core->checkReactor()->isStable() ? "stable" : "unstable") << " at the time." << std::endl;
  }
  
}
