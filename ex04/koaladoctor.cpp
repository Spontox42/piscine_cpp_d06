/*
** koalaDoctor.cpp for koalaDoctor in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex02
** 
** Made by marlon petit
** Login   <petit_x@Spontox>
** 
** Started on  Mon Jan 11 17:52:34 2016 marlon petit
** Last update Mon Jan 11 21:07:36 2016 marlon petit
*/

#include <fstream>
#include <iostream>
#include <string>

KoalaDoctor::KoalaDoctor(std::string name)
{
  std::cout << "Dr." << name << ": Je suis le Dr." << name << " ! Comment Kreoggez-vous ?" << std::endl;
  Dr.[name]: Je suis le Dr.[name] ! Comment Kreoggez-vous ?
  this->name = name;
}

KoalaDoctor::~KoalaDoctor()
{
  ;
}

void	KoalaDoctor::setId(std::string name)
{
  this->name = name;
}

int	KoalaDoctor::getName()
{
  return (this->name);
}
