/*
** koaladoctor.h for piscine_cpp_d06 in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex03
** 
** Made by marlon petit
** Login   <petit_x@epitech.net>
** 
** Started on  Mon Jan 11 19:32:29 2016 marlon petit
** Last update Mon Jan 11 21:04:15 2016 marlon petit
*/

#ifndef __KOALADOCTOR_H__
# define __KOALADOCTOR_H__

struct	KoalaDoctor
{
  KoalaDoctor(std::string);
  ~KoalaDoctor();

  std::string	name;

  void	setName(std::string);
  int	getName();
};

#endif /* ! __KOALADOCTOR_H__ */
