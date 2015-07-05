/**
 * vadee_s
 */

#include "Warpsystem.hh"

namespace WarpSystem
{
  QuantumReactor::QuantumReactor()
  {
    this->_stability = true;
  }

  QuantumReactor::~QuantumReactor()
  {
  }

  bool	QuantumReactor::isStable()
  {
    return (this->_stability == true);
  }

  void	QuantumReactor::setStability(bool state)
  {
    this->_stability = state;
  }

  Core::Core(QuantumReactor *init)
  {
    this->_coreReactor = init;
  }

  Core::~Core()
  {
  }

  QuantumReactor*	Core::checkReactor()
  {
    return (this->_coreReactor);
  }

}
