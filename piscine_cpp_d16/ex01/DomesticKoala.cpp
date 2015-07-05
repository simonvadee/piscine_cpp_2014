/**
 * vadee_s
 */

#include "DomesticKoala.h"

DomesticKoala::DomesticKoala(KoalaAction& other) : _koala(other)
{
}

DomesticKoala::~DomesticKoala()
{}

DomesticKoala::DomesticKoala(const DomesticKoala & other) :  _koala(other._koala), _actions(other._actions), _tokens(other._tokens)
{
}

DomesticKoala&		DomesticKoala::operator=(const DomesticKoala& other)
{
  _koala = other._koala;
  _tokens = other._tokens;
  _actions = other._actions;
  return *this;
}

std::vector<methodPointer_t> const*	DomesticKoala::getActions() const
{
  return &_actions;
}

void			DomesticKoala::learnAction(unsigned char token, methodPointer_t ptrf)
{
  _actions.push_back(ptrf);
  _tokens.push_back(token);
}

void			DomesticKoala::unlearnAction(unsigned char token)
{
  for (unsigned int i = 0; i != _tokens.size(); ++i)
    {
      if (_tokens[i] == token)
	{
	  _tokens.erase(_tokens.begin() + i);
	  _actions.erase(_actions.begin() + i);
	  break;
	}
    }
}

void			DomesticKoala::doAction(unsigned char token, const std::string & arg)
{
  for (unsigned int i = 0; i != _tokens.size(); ++i)
    {
      if (_tokens[i] == token)
	{
	  (_koala.*_actions[i])(arg);
	  break;
	}
    }
}

void			DomesticKoala::setKoalaAction(KoalaAction &action)
{
  _koala = action;
}
