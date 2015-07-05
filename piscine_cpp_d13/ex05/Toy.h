/**
 * vadee_s
 */

#ifndef TOY_
#define TOY_

#include <iostream>
#include "Picture.h"

class			Toy
{
 public:

  enum			ToyType
  {
    BASIC_TOY,
    ALIEN,
    BUZZ,
    WOODY
  };

  Toy();
  Toy(Toy const& other);
  Toy(ToyType, std::string name, std::string file);

  Toy&			operator=(Toy const& other);
  Toy&			operator<<(std::string const& pic);

  ~Toy();
  ToyType		getType() const;
  std::string		getName() const;
  void			setName(std::string const& name);
  bool			setAscii(std::string const& file);
  std::string		getAscii() const;
  
  virtual void		speak(std::string const& statement);
  virtual bool		speak_es(std::string const& statement);  

  class			Error
  {
  public:
    enum		ErrorType
    {
      UNKNOWN,
      PICTURE,
      SPEAK
    };
    Error();
    ~Error();
    std::string	const	what() const;
    std::string	const	where() const;
    ErrorType		type;
  };

  Error			getLastError();

 protected:
  
  Error::ErrorType	_err;
  ToyType		_type;
  std::string		_name;
  Picture		_data;
};

std::ostream&		operator<<(std::ostream& os, Toy const& toy);

#endif
