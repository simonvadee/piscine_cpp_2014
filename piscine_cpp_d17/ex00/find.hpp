/**
 * vadee_s
 */

#ifndef FIND_H_
# define FIND_H_

#include <algorithm>
#include <vector>
#include <iostream>

template<typename T>

typename T::iterator		do_find(T& a, int find)
{
  return (std::find(a.begin(), a.end(), find));
}

#endif /* !FIND_H_ */
