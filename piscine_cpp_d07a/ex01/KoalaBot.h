/**
 * vadee_s
 */

#ifndef KOALABOT_
#define KOALABOT_

#include "Parts.h"

class	KoalaBot
{

 public:
  KoalaBot(std::string const& name = "Bob-01");
  ~KoalaBot();
  
  void	setParts(Legs const& legs);
  void	setParts(Arms const& arms);
  void	setParts(Head const& head);

  void	swapParts(Legs& legs);
  void	swapParts(Arms& arms);
  void	swapParts(Head& head);

  void	informations() const;
  bool	status() const;
    
 private:

  std::string	_serial;
  Legs	_legs;
  Arms	_arms;
  Head	_head;
  
};

#endif
