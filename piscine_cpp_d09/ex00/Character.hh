/**
 * vadee_s
 */

#ifndef CHARACTER_
#define CHARACTER_

#include <iostream>

class	Character
{

public:
  Character(std::string const& name, int lvl);
  ~Character();

  std::string const& getName() const;
  int	getLvl() const;
  int	getPv() const;
  int	getPower() const;
  int		CloseAttack();
  int		RangeAttack();
  void		Heal();
  void		RestorePower();
  void		TakeDamage(int dmg);
  enum	AttackRange
    {
      CLOSE,
      RANGE
    };
  AttackRange	Range;
  
private:

  std::string	_name;
  int		_lvl;
  int		_pv;
  int		_power;

protected:
  
  int		_strength;
  int		_stamina;
  int		_intelligence;
  int		_spirit;
  int		_agility;  
};

#endif
