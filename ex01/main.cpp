/*
** main.cpp for piscine_cpp_d06 in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex01
** 
** Made by marlon petit
** Login   <petit_x@epitech.net>
** 
** Started on  Mon Jan 11 16:24:53 2016 marlon petit
** Last update Mon Jan 11 17:39:30 2016 marlon petit
*/

#include <iostream>
#include <iomanip>
#include <string>

int	main()
{
  float	i;
  std::string	str;

  std::cin >> i;
  std::cin >> str;
  if (str == "Fahrenheit")
    std::cout << std::setw(16) << std::right << std::fixed << std::setprecision(3) << 5.0 / 9.0 * (i / 32.0) << std::setw(16) << std::right << "Celsius" << std::endl;
  else if (str == "Celsius")
    std::cout << std::setw(16) << std::right << std::fixed << std::setprecision(3) << 9.0 / 5.0 * i + 32 << std::setw(16) << std::right << "Fahrenheit" << std::endl;
  return (0);
}


