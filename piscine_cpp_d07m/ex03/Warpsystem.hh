/**
 * vadee_s
 */

#ifndef WARPSYSTEM_
# define WARPSYSTEM_

#include <iostream>

namespace	WarpSystem
{

  class		QuantumReactor
  {
    
  public:
    QuantumReactor();
    ~QuantumReactor();
    bool	isStable();
    void	setStability(bool);
    
  private:
    bool	_stability;
    
  };

  class		Core
  {

  private:
    QuantumReactor* _coreReactor;

  public:
    Core(QuantumReactor *init);
    ~Core();
    QuantumReactor* checkReactor();
    
  };
  
};

#endif /* ! WARPSYSTEM_ */
