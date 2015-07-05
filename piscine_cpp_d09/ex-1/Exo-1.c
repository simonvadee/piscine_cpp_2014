/**
 * vadee_s
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "Exo-1.h"

static void	KoalaInitializer(t_koala* this, char *name, char _isALegend)
{
  if (this->m_parent.m_name)
    free(this->m_parent.m_name);
  this->m_parent.m_name = strdup(name);
  if (!(this->m_isALegend = _isALegend))
    this->m_parent.m_power = 0;
  printf("Building %s\n", this->m_parent.m_name);
}

static void	CthulhuInitializer(t_cthulhu* this)
{
 this->m_power = 42;
 this->m_name = strdup("Cthulhu");
 printf("Building %s\n", this->m_name);
}

t_cthulhu*	NewCthulhu()
{
  t_cthulhu *ret;

  printf("----\n");
  if ((ret = malloc(sizeof(*ret))) == NULL)
    return NULL;
  CthulhuInitializer(ret);
  return ret;
}

void		PrintPower(t_cthulhu* this)
{
  printf("Power => %d\n", this->m_power);
}

void		Attack(t_cthulhu* this)
{
  if (this->m_power >= 42)
    {
      printf("%s attacks and destroys the city\n", this->m_name);
      this->m_power -=42;
    }
  else
    printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void		Sleeping(t_cthulhu* this)
{
  this->m_power += 42000;
  printf("%s sleeps\n", this->m_name);
}

t_koala*	NewKoala(char* name, char _isALegend)
{
  t_koala* ret;

  printf("----\n");
  if ((ret = malloc(sizeof(*ret))) == NULL)
    return NULL;
  CthulhuInitializer(&(ret->m_parent));
  KoalaInitializer(ret, name, _isALegend);
  return ret;
}

void		Eat(t_koala* this)
{
  this->m_parent.m_power += 42;
  printf("%s eats\n", this->m_parent.m_name);
}
