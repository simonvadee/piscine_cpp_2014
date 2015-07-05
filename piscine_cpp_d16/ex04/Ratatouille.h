/**
 * vadee_s
 */

#ifndef RATATOUILLE_H_
# define RATATOUILLE_H_

#include <iostream>
#include <sstream>

class Ratatouille
{
public:
  Ratatouille();
  ~Ratatouille();
  Ratatouille(const Ratatouille &);
  Ratatouille &operator=(const Ratatouille &);

  Ratatouille &addVegetable(unsigned char);
  Ratatouille &addCondiment(unsigned int);
  Ratatouille &addSpice(double);
  Ratatouille &addSauce(const std::string &);

  std::string kooc(void);

  private:

  std::string		_ingr;
};

#endif /* !RATATOUILLE_H_ */
