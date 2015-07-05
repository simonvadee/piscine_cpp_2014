/**
 * vadee_s
 */

#include "BF_Translator.h"

BF_Translator::BF_Translator()
{
}

BF_Translator::~BF_Translator()
{

}

BF_Translator::BF_Translator(const BF_Translator& other) : _tab(other._tab)
{
}

BF_Translator&		BF_Translator::operator=(const BF_Translator &other)
{
  _tab = other._tab;
  return *this;
}

bool			 BF_Translator::open_files(std::string in, std::string out)
{
  _in.open(in.c_str());
  _out.open(out.c_str());
  return (_in && _out);
}

void			BF_Translator::set_table()
{
  _tab['+'] = "(*ptr)++;";
  _tab['-'] = "(*ptr)--;";
  _tab['>'] = "ptr++;";
  _tab['<'] = "ptr--;";
  _tab['.'] = "write(1, ptr, 1);";
  _tab[','] = "read(0, ptr, 1);";
  _tab['['] = "while (*ptr){";
  _tab[']'] = "}";
}

int			BF_Translator::translate(std::string in, std::string out)
{
  char			c;

  if (!open_files(in, out))
    return 1;
  set_table();
  std::cout << _tab['+'] << std::endl;
  _out << "#include <unistd.h> \n int main() { char array[60000]; char *ptr = array;";
  while (_in.get(c))
    {
      if (c != '+' && c != '-' && c != '>' && c != '<' && c != '.' && c != ',' && c != '[' && c != ']')
	continue;
      else
	_out << _tab[c];
    }
  _out << "return 0;}";
  return 0;
}
