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
