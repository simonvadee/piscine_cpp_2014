/**
 * vadee_s
 */

#ifndef ENCRYPTION_H_
# define ENCRYPTION_H_

#include <functional>
#include <iostream>
#include <string>
#include "IEncryptionMethod.h"
#include "Cesar.h"
#include "OneTime.h"

typedef void (IEncryptionMethod::*fptr)(char);

class		Encryption
{

 public:

  Encryption(IEncryptionMethod&, fptr);
  ~Encryption();
  Encryption(const Encryption& other);
  Encryption&	operator=(const Encryption& other);

  void		operator()(char);

  static void encryptString(IEncryptionMethod& encryptionMethod, std::string const& toEncrypt);
  static void decryptString(IEncryptionMethod& encryptionMethod, std::string const& toDecrypt);

  private:

  IEncryptionMethod&	_elem;
  fptr			_func;
};

#endif /* !ENCRYPTION_H_ */
