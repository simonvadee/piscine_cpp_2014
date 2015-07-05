/**
 * vadee_s
 */

#ifndef ONETIME_H_
# define ONETIME_H_

#include <iostream>
#include "IEncryptionMethod.h"

class		OneTime : public IEncryptionMethod
{
 public:

  OneTime(std::string const& key);
  virtual ~OneTime();
  OneTime(const OneTime& other);
  OneTime&	operator=(const OneTime& other);

  void	       setCode(char& code);
  virtual void encryptChar(char plainchar);
  virtual void decryptChar(char cipherchar);
  virtual void reset();

 private:

  std::string		_key;
  unsigned int 		_index;
};


#endif /* !ONETIME_H_ */
