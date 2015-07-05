/**
 * vadee_s
 */

#include "Toy.h"

Toy::Toy() : _type(BASIC_TOY), _name("toy"), _data()
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
  return (_data.getPictureFromFile(filename));
}

std::string		Toy::getAscii() const
{
  return _data.data;
}

void			Toy::speak(std::string const& statement)
{
  std::cout << _name << " \"" << statement << "\"" << std::endl;
}

std::ostream&		operator<<(std::ostream& os, Toy const& toy)
{
  os << toy.getName() << std::endl << toy.getAscii() << std::endl;
  return os;
}

Toy&			Toy::operator<<(std::string const& pic)
{
  _data.data = pic;
  return *this;
}
