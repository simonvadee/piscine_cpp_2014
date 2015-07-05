/**
 * vadee_s
 */

#include "Cesar.h"

Cesar::Cesar() : _add(0)
{

}

Cesar::~Cesar()
{
}

Cesar::Cesar(const Cesar& other) : _add(other._add)
{
}

Cesar&		Cesar::operator=(const Cesar& other)
{
  _add = other._add;
  return *this;
}

void		Cesar::encryptChar(char plainchar)
{
  if ((plainchar >= 'a' && plainchar <= 'z')
      || (plainchar >= 'A' && plainchar <= 'Z'))
    {
      if (plainchar >= 'a' && ((plainchar + 3 + (_add % 26)) > 122))
	plainchar -= 26;
      else if (plainchar <= 'Z' && ((plainchar + 3 + (_add % 26)) > 90))
	plainchar -= 26;
      plainchar += (3 + _add % 26);
    }
  _add++;
  std::cout << plainchar;
}

void		Cesar::decryptChar(char cipherchar)
{
  if ((cipherchar >= 'a' && cipherchar <= 'z')
      || (cipherchar >= 'A' && cipherchar <= 'Z'))
    {
      if (cipherchar >= 'a' && ((cipherchar - (3 + (_add % 26))) < 97))
	cipherchar += 26;
      else if (cipherchar <= 'Z' && ((cipherchar - (3 + (_add % 26))) < 65))
	cipherchar += 26;
      cipherchar -= (3 + _add % 26);
    }
  _add++;
  std::cout << cipherchar;
}

void		Cesar::reset()
{
  _add = 0;
}
