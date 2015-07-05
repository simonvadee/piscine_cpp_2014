/**
 * vadee_s
 */

#ifndef EX1_
#define EX1_

typedef struct s_cthulhu t_cthulhu;
typedef struct s_koala t_koala;

struct s_cthulhu
{
  int		m_power;
  char*		m_name;
  
};

struct s_koala
{
  t_cthulhu	m_parent;
  char		m_isALegend;
  
};

t_cthulhu*	NewCthulhu();
void		PrintPower(t_cthulhu* this);
void		Attack(t_cthulhu* this);
void		Sleeping(t_cthulhu* this);
t_koala*	NewKoala(char* name, char _isALegend);
  void		Eat(t_koala* this);


#endif
