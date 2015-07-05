/**
 * vadee_s
 */

#ifndef CESAR_H_
# define CESAR_H_

#include <iostream>
#include "IEncryptionMethod.h"

class		Cesar : public IEncryptionMethod
{
 public:

  Cesar();
  virtual ~Cesar();
  Cesar(const Cesar& other);
  Cesar&	operator=(const Cesar& other);

  virtual void encryptChar(char plainchar);
  virtual void decryptChar(char cipherchar);
  virtual void reset();

 private:

  unsigned int		_add;
};
#endif /* !CESAR_H_ */
