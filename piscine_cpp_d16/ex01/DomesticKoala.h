/**
 * vadee_s
 */

#ifndef DOMESTICKOALA_H_
# define DOMESTICKOALA_H_

#include <iostream>
#include <vector>
#include "KoalaAction.h"

typedef void (KoalaAction::*methodPointer_t)(std::string const&);

class DomesticKoala
{
public:
  DomesticKoala(KoalaAction &);
  virtual ~DomesticKoala();
  DomesticKoala(const DomesticKoala &);
  DomesticKoala &operator=(const DomesticKoala &);

  std::vector<methodPointer_t> const * getActions(void) const;

  void learnAction(unsigned char, methodPointer_t);

  void unlearnAction(unsigned char);

  void doAction(unsigned char, const std::string&);

  void setKoalaAction(KoalaAction&);

private:

  KoalaAction&				_koala;
  std::vector<methodPointer_t>		_actions;
  std::vector<char>			_tokens;
};

#endif /* !DOMESTICKOALA_H_ */
