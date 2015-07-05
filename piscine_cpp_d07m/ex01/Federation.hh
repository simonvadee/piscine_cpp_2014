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
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void	setupCore(WarpSystem::Core* ptr);
      void	checkCore();
      void	promote(Captain* captain);

    private :
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core*	_core;
      Captain*		_captain;
    };

    class	Ensign
    {
      
    public:
      Ensign(std::string name);
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
    
  private :
    int		_length;
    int		_width;
    std::string	_name;
    short		_maxWarp;
    WarpSystem::Core*	_core;
  };
  
  
};

#endif
