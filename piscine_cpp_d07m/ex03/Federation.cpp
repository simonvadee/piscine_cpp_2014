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
    
    Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
    {
      this->_length = length;
      this->_width = width;
      this->_name = name;
      this->_maxWarp = maxWarp;
      this->_home = EARTH;
      this->_location = this->_home;
      this->_shield = 100;
      this->_photonTorpedo = torpedo;
      std::cout << "The ship USS " << this->_name << " has been finished. It is " << this->_length << " m in length and " << this->_width << " m in width. It can go to Warp " << this->_maxWarp << "! Weapons are set: " << this->_photonTorpedo << " torpedoes ready." << std::endl;
    }

    Ship::Ship()
    {
      this->_length = 289;
      this->_width = 132;
      this->_name = "Entreprise";
      this->_maxWarp = 6;
      this->_home = EARTH;
      this->_location = this->_home;
      this->_shield = 100;
      this->_photonTorpedo = 20;
      std::cout << "The ship USS Entreprise has been finished. It is 289 m in length and 132 m in width. It can go to Warp 6! Weapons are set: 20 torpedoes ready." << std::endl;
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

    void	Ship::promote(Captain* captain)
    {
      this->_captain = captain;
      std::cout << this->_captain->getName() << ": I'm glad to be the captain of the USS " << this->_name << '.' << std::endl;
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

    int		Ship::getShield()
    {
      return (this->_shield);
    }

    void	Ship::setShield(int shield)
    {
      this->_shield = shield;
    }

    int		Ship::getTorpedo()
    {
      return (this->_photonTorpedo);
    }

    void	Ship::setTorpedo(int torpedo)
    {
      this->_photonTorpedo = torpedo;
    }

    void	Ship::fire(Borg::Ship* ship)
    {
      if (this->_photonTorpedo <= 0)
	std::cout << this->_name << ": No more torpedo to fire, " << this->_captain->getName() << " !" << std::endl;
      else
	{
	  this->_photonTorpedo -= 1;
	  std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining." << std::endl;
	  ship->setShield((ship->getShield() - 50));
        }
    }
    
    void	Ship::fire(int torpedoes, Borg::Ship* ship)
    {
      if (this->_photonTorpedo <= 0)
	std::cout << this->_name << ": No more torpedo to fire, " << this->_captain->getName() << " !" << std::endl;
      if (this->_photonTorpedo - torpedoes > 0)
	{
	  this->_photonTorpedo -= torpedoes;
	  std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining." << std::endl;
	  ship->setShield((ship->getShield() - (50 * torpedoes)));
	}
      else
	std::cout << this->_name << ": No enough torpedoes to fire, " << this->_captain->getName() << " !" << std::endl;
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
    
  };
  
  /**
   * Federation::Ship
   */
  
  Ship::Ship(int length, int width, std::string name)
  {
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = 1;
    this->_home = VULCAN;
    this->_location = this->_home;
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

  WarpSystem::Core*	Ship::getCore()
  {
    return (this->_core);
  }
  
};

