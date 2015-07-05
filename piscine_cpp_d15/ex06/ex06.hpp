#ifndef EX06_H_
# define EX06_H_

#include<iostream>
#include<sstream>
template <typename T, typename U = T>
class Tuple
{
public:
  std::string	toString() const
  {
    std::string ret =  "[TUPLE " + printType(a) + " " + printType(b) + ']';
    return ret;
  }

  T	a;
  U	b;

  private:

  std::string printType(int c) const
  {
    std::ostringstream	os;
    os << "[int:" << c << ']';
    return os.str();
  }
  std::string printType(float c) const
  {
    std::ostringstream	os;
    os << "[float:" << c << "f]";
    return os.str();
  }
  std::string printType(std::string c) const
  {
    std::string ret = "[string:\"" + c + "\"]";
    return ret;
  }
  template <typename V>
  std::string printType(V) const
  {
    std::string ret = "[???]";
    return ret;
  }

};

#endif /* !EX06_H_ */
