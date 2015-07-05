/* Header *//* Header *//* Header *//* Header */
/* Header */
/* Header */
/* Header */
/* Header *//* Header *//* Header *//* Header */

#include <iostream>
#include <iomanip>

void		convert_temp(double tp, std::string scale)
{
  std::cout.precision(3);
  
  if (scale == "Fahrenheit")
    {
      std::cout << std::fixed << std::setw(16) << (tp - (double)32) / (double)1.8 << std::setw(16) << "Celsius" << std::endl;
      
    }
  else if (scale == "Celsius")
    {
      std::cout <<  std::fixed << std::setw(16) << (tp  * (double)1.8) + (double)32  << std::setw(16) <<"Fahrenheit" << std::endl;
    }  
}

int		main(int ac, char **av)
{
  double	temp1;
  std::string	scale;
  
  std::cin >> temp1;
  std::cin >> scale;
  convert_temp(temp1, scale);
}

