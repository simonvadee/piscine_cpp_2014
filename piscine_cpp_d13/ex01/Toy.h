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
    ALIEN
  };

  Toy();
  Toy(Toy const& other);
  Toy(ToyType, std::string name, std::string file);
  ~Toy();
  ToyType		getType() const;
  std::string		getName() const;
  void			setName(std::string const& name);
  bool			setAscii(std::string const& file);
  std::string		getAscii() const;
  
  Toy&			operator=(Toy const& other);
  
 private:
  
  ToyType		_type;
  std::string		_name;
  Picture		_data;
};

#endif
