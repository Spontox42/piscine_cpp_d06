/*
** koaladoctor.h for piscine_cpp_d06 in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex03
** 
** Made by marlon petit
** Login   <petit_x@epitech.net>
** 
** Started on  Mon Jan 11 19:32:29 2016 marlon petit
** Last update Mon Jan 11 22:28:55 2016 marlon petit
*/

#ifndef __KOALADOCTOR_H__
# define __KOALADOCTOR_H__

#include "sickkoala.h"

struct	KoalaDoctor
{
  KoalaDoctor(std::string);
  ~KoalaDoctor();

  std::string	name;
  int	w;

  void	setName(std::string);
  std::string	getName();
  void	diagnose(SickKoala *);
  void	timeCheck();
};

#endif /* ! __KOALADOCTOR_H__ */
