/**
 * vadee_s
 */

#include "Picture.h"

Picture::Picture() : data("")
{
}

Picture::Picture(const std::string& file)
{
  std::ifstream	source(file.c_str());
  
  if (!source)
    data = "ERROR";
  else
    getline(source, data, '\0');
}

Picture::Picture(Picture const& other)
{
  data = other.data;
}

Picture&	Picture::operator=(Picture const& other)
{
  data = other.data;
  
  return *this;
}

Picture::~Picture()
{
}

bool		Picture::getPictureFromFile(const std::string& file)
{
  std::ifstream	source(file.c_str());
  
  if (!source)
    {
      data = "ERROR";
      return false;
    }
  getline(source, data, '\0');
  return true;
}
