/**
 * vadee_s
 */

#ifndef EX02_
#define EX02_

#include <iostream>

template<typename T>
T	min(T a, T b)
{
  T ret;
  
  std::cout << "template min" << std::endl;
  (a <= b) ? ret = a : ret = b;
  return ret;
}

int	min(int a, int b)
{
  int ret;
  
  std::cout << "non-template min" << std::endl;
  (a <= b) ? ret = a : ret = b;
  return ret;
}

template<typename T, typename U>
T	templateMin(T *array, U size)
{
  T ret;
  unsigned int i = 1;
  
  if (size < 1)
    return 0;
  ret = array[0];
  while (--size)
    ret = min<T>(ret, array[i++]);
  return ret;
}

int	nonTemplateMin(int *array, int size)
{
  int ret;
  unsigned int i = 1;
  
  if (size < 1)
    return 0;
  ret = array[0];
  while (--size)
    ret = min(ret, array[i++]);
  return ret;  
}

#endif
