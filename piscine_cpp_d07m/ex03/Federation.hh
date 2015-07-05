/**
 *
 */

#ifndef FEDERATION_
#define FEDERATION_

#include <iostream>
#include "Warpsystem.hh"
#include "Destination.hh"
// #include "Borg.hh"

namespace Borg
{
  class Ship;
}

namespace	Federation
{
  
  namespace	Starfleet
  {

    class	Captain
    {
      
    public:
      Captain(std::string name);
      ~Captain();
      std::string getName();
      int	getAge();
      void	setAge(int age);
      
    private:
      std::string _name;
      int	_age;

    };
    
    class	Ship
    {
      
    public:
      Ship(int length, int width, std::string name, short maxWarp, int torpedo);
      Ship();
      ~Ship();
      void	setupCore(WarpSystem::Core* ptr);
      void	checkCore();
      void	promote(Captain* captain);
      bool	move(int warp, Destination d);
      bool	move(int warp);
      bool	move(Destination d);
      bool	move();
      int	getShield();
      void	setShield(int);
      int	getTorpedo();
      void	setTorpedo(int);
      void	fire(Borg::Ship* ship);
      void	fire(int torpedoes, Borg::Ship* ship);
      
    private :
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core*	_core;
      Captain*		_captain;
      Destination	_location;
      Destination	_home;
      int		_shield;
      int		_photonTorpedo;
    };

    class	Ensign
    {
      
    public:
      explicit Ensign(std::string name);
      ~Ensign();
      
    private:
      std::string	_name;
      
    };
      
  };
  
  class	Ship
  {
    
  public:
    Ship(int length, int width, std::string name);
    ~Ship();
    void	setupCore(WarpSystem::Core* ptr);
    void	checkCore();
    bool	move(int warp, Destination d);
    bool	move(int warp);
    bool	move(Destination d);
    bool	move();
    WarpSystem::Core*	getCore();
    
  private :
    int		_length;
    int		_width;
    std::string	_name;
    short		_maxWarp;
    WarpSystem::Core*	_core;
    Destination	_location;
    Destination	_home;
   };
  
  
};

#endif
