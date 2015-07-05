/**
 * vadee_s
 */

#include "Encryption.h"

Encryption::Encryption(IEncryptionMethod& elem, fptr ptr) : _elem(elem), _func(ptr)
{

}

Encryption::~Encryption()
{}

Encryption::Encryption(const Encryption& other) : _elem(other._elem), _func(other._func)
{}

Encryption&		Encryption::operator=(const Encryption &other)
{
  _elem = other._elem;
  _func = other._func;
  return *this;
}

void			Encryption::operator()(char toEncrypt)
{
  (_elem.*_func)(toEncrypt);
}

void		Encryption::encryptString(IEncryptionMethod& encryptionMethod, std::string const& toEncrypt)
{
  encryptionMethod.reset();

  std::cout << std::endl;
}

void		Encryption::decryptString(IEncryptionMethod& encryptionMethod, std::string const& toDecrypt)
{
  encryptionMethod.reset();
  std::hash<std::string>
  std::cout << std::endl;
}
