/**
 * vadee_s
 */

#ifndef PICTURE_
# define PICTURE_

#include <iostream>
#include <fstream>

class			Picture
{
 public:

  Picture();
  ~Picture();
  bool			getPictureFromFile(const std::string& file);
  Picture(const std::string& file);

  std::string		data;
};

#endif
