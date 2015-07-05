/**
 * vadee_s
 */

#ifndef BORG_
#define BORG_

#include "Warpsystem.hh"
#include "Destination.hh"
#include "Federation.hh"

namespace	Borg
{

    class	Ship
    {
      
    public:
      Ship(int wF, short);
      Ship(int wF);
      ~Ship();
      void	setupCore(WarpSystem::Core* ptr);
      void	checkCore();
      bool	move(int warp, Destination d);
      bool	move(int warp);
      bool	move(Destination d);
      bool	move();
      int	getShield();
      void	setShield(int);
      int	getWeaponFrequency();
      void	setWeaponFrequency(int);
      short	getRepair();
      void	setRepair(short);
      void	fire(Federation::Starfleet::Ship*); // enleve _weaponFrequency; a l’attribut _shield de la cible.
      void	fire(Federation::Ship*); // rend le QuantumReactor de la cible instable.
      void	repair(); // enleve une charge de _repair (si _repair > 0),
      // remet _shield a 100.
    private :
      int		_side;
      short		_maxWarp;
      WarpSystem::Core*	_core;
      Destination	_location;
      Destination	_home;
      int		_shield; // vaut 100 lors de la construction.
      int		_weaponFrequency; // doit etre fourni a la construction
      short		_repair; // peut etre fourni. Sinon, vaut 3
    };
  
};

#endif /* ! BORG_ */
