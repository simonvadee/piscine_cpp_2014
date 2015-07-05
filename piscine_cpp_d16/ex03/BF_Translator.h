#ifndef BF_TRANSLATOR_H_
# define BF_TRANSLATOR_H_

#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <map>

class BF_Translator
{
public:
  BF_Translator();
  ~BF_Translator();
  BF_Translator(const BF_Translator &);
  BF_Translator &operator=(const BF_Translator &);

  bool	open_files(std::string, std::string);
  int	translate(std::string in, std::string out);
  void	set_table();

private:

  std::ifstream				_in;
  std::ofstream				_out;

  std::map<char, std::string>		_tab;

};

#endif /* !BF_TRANSLATOR_H_ */
