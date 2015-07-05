/**
 * vadee_s
 */

#ifndef BORG_
#define BORG_

#include "Federation.hh"

namespace	Borg
{

    class	Ship
    {
      
    public:
      Ship();
      ~Ship();
      void	setupCore(WarpSystem::Core* ptr);
      void	checkCore();
      bool	move(int warp, Destination d);
      bool	move(int warp);
      bool	move(Destination d);
      bool	move();
      
    private :
      int		_side;
      short		_maxWarp;
      WarpSystem::Core*	_core;
      Destination	_location;
      Destination	_home;
    };
  
};

#endif /* ! BORG_ */
