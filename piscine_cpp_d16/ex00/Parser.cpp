/**
 * vadee_s
 */

#include <cstdlib>
#include <sstream>
#include "Parser.h"

Parser::Parser() : _result(0)
{

}

Parser::~Parser()
{
}

Parser::Parser(const Parser &other) : _operator(other._operator), _operand(other._operand), _result(other._result)
{

}

Parser &Parser::operator=(const Parser &other)
{
  _operator = other._operator;
  _operand = other._operand;
  _result = other._result;
  return *this;
}

void		Parser::feed(std::string const& expr)
{
  std::string		exp = expr;
  std::ostringstream	buff;
  int		save1 = 0;
  int		save2 = 0;
  char		op;

  if (exp[exp.size() - 1] != ')')
    exp += ")";
  for (std::string::const_iterator it = exp.begin(); it != exp.end(); ++it)
    {
      if (*it >= '0' && *it <= '9')
	{
	  while (it != exp.end() && *it >= '0' && *it <= '9')
	    {
	      buff << *it;
	      ++it;
	    }
	  _operand.push(atoi(buff.str().c_str()));
	  buff.str("");
	}
      if (*it == '+' || *it == '-' || *it == '*' || *it == '/' || *it == '%' || *it == '(')
	_operator.push(*it);
      if (it == exp.end() || *it == ')')
	{
	  while (_operator.size() && _operator.top() != '(')
	    {
	      save1 = _operand.top();
	      _operand.pop();
	      save2 = _operand.top();
	      _operand.pop();
	      op = _operator.top();
	      _operator.pop();
	      if (op == '+')
		_operand.push(save2 + save1);
	      if (op == '-')
		_operand.push(save2 - save1);
	      if (op == '*')
		_operand.push(save2 * save1);
	      if (op == '/')
		_operand.push(save2 / save1);
	      if (op == '%')
		_operand.push(save2 % save1);
	    }
	  if (_operator.size() && _operator.top() == '(')
	    _operator.pop();
	}
    }
  _result += _operand.top();
  _operand.pop();
}

int		Parser::result() const
{
  return _result;
}

void		Parser::reset()
{
  _result = 0;
}
