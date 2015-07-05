/**
 * vadee_s
 */

#include "ex04.hpp"


template <typename T>
Tester<T>::Tester()
{
}

template <typename T>
Tester<T>::~Tester()
{
}

template <typename T>
bool		equal(T const& a, T const& b)
{
  return (a == b);
}

template <typename T>
bool		Tester<T>::equal(T const& a, T const& b)
{
  return (a == b);
}

template bool equal<int>(int const&, int const&);
template bool equal<float>(float const&, float const&);
template bool equal<double>(double const&, double const&);
template bool equal<std::string>(std::string const&, std::string const&);

template class Tester<int>;
template class Tester<double>;
template class Tester<float>;
template class Tester<std::string>;
