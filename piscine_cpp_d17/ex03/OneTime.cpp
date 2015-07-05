/**
 * vadee_s
 */

#include "OneTime.h"

OneTime::OneTime(std::string const& key) : _key(key), _index(0)
{

}

OneTime::~OneTime()
{
}

OneTime::OneTime(const OneTime& other) : _key(other._key), _index(other._index)
{

}

OneTime&		OneTime::operator=(const OneTime& other)
{
  _key = other._key;
  _index = other._index;
  return *this;
}

void			OneTime::setCode(char& code)
{
  if (_index == _key.size())
    _index = 0;
  if (_key[_index] <= 'Z')
    code = _key[_index] - 65;
  else if (_key[_index] >= 'a')
    code = _key[_index] - 97;
}

void		OneTime::encryptChar(char plainchar)
{
  char		code;

  setCode(code);
  if ((plainchar >= 'a' && plainchar <= 'z')
      || (plainchar >= 'A' && plainchar <= 'Z'))
    {
      if (plainchar >= 'a' && (plainchar + code > 122))
	plainchar -= 26;
      else if (plainchar <= 'Z' && (plainchar + code > 90))
	plainchar -= 26;
      plainchar += code;
    }
  _index++;
  std::cout << plainchar;
}

void		OneTime::decryptChar(char cipherchar)
{
  char		code;

  setCode(code);
  if ((cipherchar >= 'a' && cipherchar <= 'z')
      || (cipherchar >= 'A' && cipherchar <= 'Z'))
    {
      if (cipherchar >= 'a' && (cipherchar - code < 97))
	cipherchar += 26;
      else if (cipherchar <= 'Z' && (cipherchar - code < 65))
	cipherchar += 26;
      cipherchar -= code;
    }
  _index++;
  std::cout << cipherchar;
}

void		OneTime::reset()
{
  _index = 0;
}
