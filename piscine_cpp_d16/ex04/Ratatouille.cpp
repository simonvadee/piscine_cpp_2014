/**
 * vadee_s
 */

#include "Ratatouille.h"

Ratatouille::Ratatouille()
{

}

Ratatouille::~Ratatouille()
{

}

Ratatouille::Ratatouille(const Ratatouille& other)
{
  _ingr = other._ingr;
}

Ratatouille&		Ratatouille::operator=(const Ratatouille & other)
{
  _ingr = other._ingr;
  return *this;
}

 Ratatouille&		Ratatouille::addVegetable(unsigned char v)
 {
   std::stringstream	buff;
   buff << v;
   _ingr += buff.str();
   return *this;
 }

 Ratatouille&		Ratatouille::addCondiment(unsigned int c)
 {
   std::stringstream	buff;
   buff << c;
   _ingr += buff.str();
   return *this;
 }

 Ratatouille&		Ratatouille::addSpice(double s)
 {
   std::stringstream	buff;
   buff << s;
   _ingr += buff.str();
   return *this;
 }

Ratatouille&		Ratatouille::addSauce(const std::string & sa)
{
   std::stringstream	buff;
  buff << sa;
  _ingr += buff.str();
  return *this;
}

std::string		Ratatouille::kooc()
{
  return _ingr;
}
