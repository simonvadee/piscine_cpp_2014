#ifndef EX05_H_
# define EX05_H_

#include <iostream>

template <typename T>
class array
{
public:
  array();
  array(unsigned int);
  array(array const& other);

  array&	operator=(array const& other);
  T&		operator[](unsigned int i);
  T&		operator[](unsigned int i) const;
  unsigned int 	size() const;

  template<typename U>
  array<U>	       convertTo(U (*fptr)(T const&))
  {
    array<U>	ret(_size);

    for (unsigned int i = 0; i != _size; i++)
      ret[i] = fptr(_array[i]);
    return ret;
  }

  void		dump() const;

  ~array();

private:
  T		*_array;
  unsigned int	_size;
};


/* construcor */
template <typename T>
array<T>::array() : _array(NULL), _size(0)
{
}
/* construcor */


/* construcor */
template <typename T>
array<T>::array(unsigned int param) : _array(new T[param]), _size(param)
{
  for(unsigned int i = 0; i != _size; i++)
    _array[i] = 0;
}
/* construcor */


/* getsize */
template <typename T>
unsigned int		array<T>::size() const
{
  return _size;
}
/* getsize */


/* COPY CONSTRUCTOR*/
template <typename T>
array<T>::array(array const& other)
{
  _size = other._size;
  _array = new T[_size];
  for(unsigned int i = 0; i != _size; i++)
    _array[i] = other._array[i];
}
/* COPY CONSTRUCTOR*/


/* OPERATOR=*/
template <typename T>
array<T>&		array<T>::operator=(array const& other)
{
  _size = other._size;
  if (_array)
    delete [] _array;
  _array = new T[_size];
  for(unsigned int i = 0; i != _size; i++)
    _array[i] = other._array[i];
  return *this;
}
/* OPERATOR=*/

template <typename T>
T&			array<T>::operator[](unsigned int i)
{
  T	*tmp;
  if (i < _size)
    return _array[i];
  else
    {
      tmp = new T[i + 1];
      for (unsigned int j = 0; j != i + 1; j++)
	tmp[j] = 0;
      for (unsigned int j = 0; j != _size; j++)
	tmp[j] = _array[j];
      if (_array)
	delete [] _array;
      _array = tmp;
      _size = i + 1;
      return _array[i];
    }
}

template <typename T>
T&			array<T>::operator[](unsigned int i) const
{
  if (i < _size)
    return _array[i];
  else
    throw (std::exception());
}


template <typename T>
void			array<T>::dump() const
{
  std::cout << '[';
  for (unsigned int i = 0; i != _size; i++)
    {
      std::cout << _array[i];
      if (i+1 != _size)
	std::cout << ", ";
    }
  std::cout << ']' << std::endl;
}


template <>
void			array<bool>::dump() const
{
  std::cout << '[';
  for (unsigned int i = 0; i != _size; i++)
    {
      if (_array[i])
	std::cout << "true";
      else
	std::cout << "false";
      if (i+1 != _size)
	std::cout << ", ";
    }
  std::cout << ']' << std::endl;
}

/* DESTRUCTOR */
template <typename T>
array<T>::~array()
{
  if (_array)
    delete [] _array;
}
/* DESTRUCTOR */

#endif /* !EX05_H_ */
