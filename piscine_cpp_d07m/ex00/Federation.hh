/**
 *
 */

#ifndef FEDERATION_
#define FEDERATION_

#include <iostream>
#include "Warpsystem.hh"

namespace	Federation
{
  
  namespace	Starfleet
  {
    class	Ship
    {
      
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void	setupCore(WarpSystem::Core* ptr);
      void	checkCore();

    private :
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core*	_core;
    };
  };

  class	Ship
  {
    
  public:
    Ship(int length, int width, std::string name);
    ~Ship();
    void	setupCore(WarpSystem::Core* ptr);
    void	checkCore();
    
  private :
    int		_length;
    int		_width;
    std::string	_name;
    short		_maxWarp;
    WarpSystem::Core*	_core;
  };
  
  
};

#endif
