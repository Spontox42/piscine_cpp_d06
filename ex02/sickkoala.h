/*
** sickkoala.h for sickkoala in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex02
** 
** Made by marlon petit
** Login   <petit_x@Spontox>
** 
** Started on  Mon Jan 11 17:43:37 2016 marlon petit
** Last update Mon Jan 11 20:56:22 2016 marlon petit
*/

#ifndef __SICKKOALA_H__
# define __SICKKOALA_H__

struct	SickKoala
{
  SickKoala(std::string);
  ~SickKoala();

  std::string	name;

  void	setName(std::string);
  std::string	getName();
  void	poke();
  int	takeDrug(std::string);
  void	overDrive(std::string);
};

#endif /* ! __SICKKOALA_H__ */
