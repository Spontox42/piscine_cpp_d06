/*
** main.cpp for main in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex00
** 
** Made by marlon petit
** Login   <petit_x@Spontox>
** 
** Started on  Mon Jan 11 15:40:13 2016 marlon petit
** Last update Mon Jan 11 20:50:21 2016 marlon petit
*/

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
  int	i = 1;
  char	str;

  if (ac == 1)
    std::cout << "my_cat: Usage : ./my_cat file [...]" << std::endl;
  else
    {
      while (i != ac)
	{
	  std::fstream fs (av[i]);
	  if (fs.is_open())
	    {
	      str = fs.get();
	      while (fs.good())
		{
		  std::cout << str;
		  str = fs.get();
		}
	    }
	  else
	    std::cout << "my_cat: <" << av[i] << ">: No such file or directory" << std::endl;
	  i++;
	}
    }
  return (0);
}
