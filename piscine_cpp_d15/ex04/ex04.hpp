/**
 * vadee_s
 */

#ifndef EX04_
#define EX04_

#include <iostream>

template <typename T>
class Tester
{
public:
  Tester();
  ~Tester();

  bool		equal(T const& a, T const& b);
};

template <typename T>
bool	equal(T const& a, T const& b);

#endif
