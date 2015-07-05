/**
 * vadee_s
 */

#ifndef SKAT_
#define SKAT_

#include <iostream>

class Skat
{

 public:

  Skat(std::string const& name = "bob", int stimPaks = 15);
  ~Skat();

  int&	stimPaks();
  const std::string& name();
  void shareStimPaks(int number, int& stock);
  void addStimPaks(unsigned int number);
  void useStimPaks();
  void status();

 private:

  std::string	  _name;
  int		_stimPaks;
};

#endif
