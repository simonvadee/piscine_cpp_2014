/**
 * vadee_s
 */

#ifndef EX00_
#define EX00_

template<typename T>
void	swap(T &a, T &b)
{
  T c;

  c = a;
  a = b;
  b = c;
}


template<typename T>
T	min(T a, T b)
{
  T ret;

  (a < b) ? ret = a : ret = b;
  return ret;
}

template<typename T>
T	max(T a, T b)
{
  T ret;

  (a > b) ? ret = a : ret = b;
  return ret;
}

template<typename T>
T	add(T a, T b)
{
  return a + b;
}

#endif
