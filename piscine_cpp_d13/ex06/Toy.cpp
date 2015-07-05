/**
 * vadee_s
 */

#include "Toy.h"

Toy::Toy() : _err(Error::UNKNOWN), _type(BASIC_TOY), _name("toy"), _data()
{
}

Toy::Toy(ToyType type, std::string name, std::string file) : _type(type), _name(name), _data(file)
{
}

Toy::Toy(Toy const& other) : _type(other._type), _name(other._name), _data(other._data)
{
}

Toy&			Toy::operator=(Toy const& other)
{
  _type = other._type;
  _name = other._name;
  _data = other._data;
  return *this;
}

Toy::~Toy()
{
}

Toy::ToyType		Toy::getType() const
{
  return _type;
}

std::string		Toy::getName() const
{
  return _name;
}

void			Toy::setName(std::string const& name)
{
  _name = name;
}

bool			Toy::setAscii(std::string const& filename)
{
  bool			ret = _data.getPictureFromFile(filename);

  if (ret == false)
    _err = Error::PICTURE;
  return (ret);
}

std::string		Toy::getAscii() const
{
  return _data.data;
}

bool			Toy::speak(std::string const& statement)
{
  std::cout << _name << " \"" << statement << "\"" << std::endl;
  return true;
}

std::ostream&		operator<<(std::ostream& os, Toy const& toy)
{
  os << toy.getName() << std::endl << toy.getAscii() << std::endl;
  return os;
}

bool			Toy::speak_es(std::string const& statement)
{
  (void) statement;
  _err = Error::SPEAK;
  return false;
}

Toy&			Toy::operator<<(std::string const& pic)
{
  _data.data = pic;
  return *this;
}

Toy::Error::Error() : type(Error::UNKNOWN)
{
}

Toy::Error::~Error()
{
}

Toy::Error			Toy::getLastError()
{
  Error		err;

  err.type = _err;
  return err;
}

std::string const	Toy::Error::what() const
{
  if (type == PICTURE)
    return ("bad new illustration");
  else if (type == SPEAK)
    return ("wrong mode");
  return "";
}

std::string const	Toy::Error::where() const
{
  if (type == PICTURE)
    return ("setAscii");
  else if (type == SPEAK)
    return ("speak_es");
  return "";  
}

