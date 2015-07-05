/**
 * vadee_s
 */

#include "ToyStory.h"

ToyStory::ToyStory()
{
}

ToyStory::~ToyStory()
{
}

void		ToyStory::tellMeAStory(std::string const filename, Toy& toy1, ptrf func1, Toy& toy2, ptrf func2)
{
  std::ifstream	file(filename.c_str());
  std::string	buff;
  int		lel = 0;
  Toy::Error	err;

  
  std::cout << toy1.getAscii() << std::endl << toy2.getAscii() << std::endl;
  if (file)
    {
      while (getline(file, buff))
	{
	  if (buff.find("picture:") == 0)
	    {
	      if (lel % 2 == 0 && !(toy1.setAscii(buff.substr(8))))
		{
		  err = toy1.getLastError();
		  std::cout << err.where() << ": " << err.what() << std::endl;
		}
	      else if (lel % 2 != 0 && !(toy2.setAscii(buff.substr(8))))
		{
		  err = toy2.getLastError();
		  std::cout << err.where() << ": " << err.what() << std::endl;
		}
	    }
	    else
	      {
		if (lel % 2 == 0 && !((toy1.*func1)(buff)))
		  {
		    err = toy1.getLastError();
		    std::cout << err.where() << ": " << err.what() << std::endl;
		  }
		else if (lel % 2 != 0 && !((toy2.*func2)(buff)))
		  {
		    err = toy2.getLastError();
		    std::cout << err.where() << ": " << err.what() << std::endl;
		  }
		lel++;
	      }
	}
    }
  else
    std::cout << "Bad Story" << std::endl;
}
