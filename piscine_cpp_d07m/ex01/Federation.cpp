/**
 * vadee_s
 */

#include "Federation.hh"
#include "Borg.hh"

namespace Federation
{
  namespace Starfleet
  {

    /**
     * Federation::Starfleet::Captain
     */
    
    Captain::Captain(std::string name)
    {
      this->_name = name;
      this->_age = -1;
    }
    
    Captain::~Captain()
    {
    }

    std::string	Captain::getName()
    {
      return (this->_name);
    }

    int		Captain::getAge()
    {
      return (this->_age);
    }

    void	Captain::setAge(int age)
    {
      this->_age = age;
    }

    /**
     * Federation::Starfleet::Ship
     */
    
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
      std::cout <<  "USS " << this->_name << ": The core is " << (this->_core->checkReactor()->isStable() ? "stable" : "unstable") << " at the time." << std::endl;
    }

    void	Ship::promote(Captain* captain)
    {
      this->_captain = captain;
      std::cout << this->_captain->getName() << ": I'm glad to be the captain of the USS " << this->_name << '.' << std::endl;
    }
    
    /**
     * Federation::Starfleet:Ensign
     */

    Ensign::Ensign(std::string name)
    {
      this->_name = name;
      std::cout << "Ensign " << this->_name << ", awaiting orders." << std::endl;
    }

    Ensign::~Ensign()
    {
    }
    
  }
  
  /**
   * Federation::Ship
   */
  
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
    std::cout << this->_name << ": The core is " << (this->_core->checkReactor()->isStable() ? "stable" : "unstable") << " at the time." << std::endl;
  }
  
}
