/*
** sickkoala.cpp for sickkoala in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex02
** 
** Made by marlon petit
** Login   <petit_x@Spontox>
** 
** Started on  Mon Jan 11 17:52:34 2016 marlon petit
** Last update Mon Jan 11 19:23:18 2016 marlon petit
*/

#include <iostream>
#include <string>

#include "sickkoala.h"

Koala::Koala(std::string name)
{
  this->name = name;
}

Koala::~Koala()
{
  std::cout << "Mr." << this->getName() << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

void	Koala::poke()
{
  std::cout << "Mr." << this->getName() << ": Gooeeeeerrk !! :’(" << std::endl;
}

int	Koala::takeDrug(std::string str)
{
  if (!str.compare("mars"))
    {
      std::cout << "Mr." << this->getName() << ": Mars, et ca kreog !" << std::endl;
      return (true);
    }
  else if (!str.compare("Buronzand"))
    {
      std::cout << "Mr." << this->getName() << ": Et la fatigue a fait son temps !" << std::endl;
      return (true);
    }
  else
    {
      std::cout << "Mr." << this->getName() << ": Goerkreog !" << std::endl;
      return (false);
    }
}

void	Koala::overDrive(std::string str)
{
  int	pos;
  int	i;

  std::cout << "Mr." << this->getName() << ": ";
  pos = str.find("Kreog !");
  i = 0;
  while (pos != -1)
    {
      while (i != pos)
	std::cout << str[i++];
      std::cout << "1337 !";
      i = pos + 7;
      pos = str.find("Kreog !", pos + 7);
    }
  std::cout << &str[i] << std::endl;
}

void	Koala::setName(std::string name)
{
  this->name = name;
}

std::string	Koala::getName()
{
  return (this->name);
}
