#ifndef PARSER_H_
# define PARSER_H_

#include<iostream>
#include<stack>

class Parser
{
public:
  Parser();
  Parser(const Parser &);
  ~Parser();
  Parser		&operator=(const Parser &);

  void	feed(std::string const&);
  int	result() const;
  void	reset();

private:

  std::stack<char>	_operator;
  std::stack<int>	_operand;
  int			_result;
};

#endif /* !PARSER_H_ */
