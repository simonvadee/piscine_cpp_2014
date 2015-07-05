/**
 * vadee_s
 */

#ifndef EX03_
#define EX03_

#include <iostream>

template<typename T, typename U>
void		foreach(T* array, void (&func)(const T& elem), U size)
{
  unsigned int i = 0;

  while (size--)
    func(array[i++]);
}

template<typename T>
void		print(T const& elem)
{
  std::cout << elem << std::endl;
}
#endif
