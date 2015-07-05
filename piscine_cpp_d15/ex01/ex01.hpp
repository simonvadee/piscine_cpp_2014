/**
 * vadee_s
 */

#ifndef EX01_
#define EX01_

#include <cstring>

template<typename T>
int	compare(T const& a, T const& b)
{
  if (a == b)
    return 0;
  else if (a > b)
    return 1;
  else
    return -1;
}

template<>
int	compare<const char*>(const char* const& a, const char* const& b)
{
  int ret = strcmp(a, b);

  if (ret == 0)
    return 0;
  else if (ret > 0)
    return 1;
  else
    return -1;
}
#endif
