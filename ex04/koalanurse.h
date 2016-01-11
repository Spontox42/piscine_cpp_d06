/*
** koalanurse.h for piscine_cpp_d06 in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex03
** 
** Made by marlon petit
** Login   <petit_x@epitech.net>
** 
** Started on  Mon Jan 11 19:32:29 2016 marlon petit
** Last update Mon Jan 11 20:58:42 2016 marlon petit
*/

#ifndef __KOALANURSE_H__
# define __KOALANURSE_H__

#include "sickkoala.h"

struct	KoalaNurse
{
  KoalaNurse(int);
  ~KoalaNurse();

  int	id;
  int	working;

  void	setId(int);
  int	getId();
  void	timeCheck();
  void	giveDrug(std::string, SickKoala *);
  std::string	readReport(std::string);
};

#endif /* ! __KOALANURSE_H__ */
