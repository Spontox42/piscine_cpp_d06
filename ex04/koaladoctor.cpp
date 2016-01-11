/*
** koalaDoctor.cpp for koalaDoctor in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex02
** 
** Made by marlon petit
** Login   <petit_x@Spontox>
** 
** Started on  Mon Jan 11 17:52:34 2016 marlon petit
** Last update Mon Jan 11 23:05:36 2016 marlon petit
*/

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
  std::cout << "Dr." << name << ": Je suis le Dr." << name << " ! Comment Kreoggez-vous ?" << std::endl;
  this->name = name;
  this->w = false;
}

KoalaDoctor::~KoalaDoctor()
{
}

void	KoalaDoctor::diagnose(SickKoala *patient)
{
  std::string	drug[] = {"mars", "Buronzand", "Viagra", "Extasy", "Feuille d’eucalyptus"};
  std::string	file_name = patient->getName() + ".report";
  std::ofstream	file (file_name.c_str(), std::ios::out);

  std::cout << """Dr." << this->name << ": Alors qu’est-ce qui vous goerk Mr." << patient->name << " ?" <<std::endl;
  patient->poke();
  if (file)
    {
      file << drug[std::rand() % 5] << std::endl;
      file.close();
    }
}

void	KoalaDoctor::timeCheck()
{
  if (this->w == false)
    {
      this->w = true;
      std::cout << "Dr." << this->name << ": Je commence le travail !" << std::endl;
    }
  else
    {
      this->w = false;
      std::cout << "Dr." << this->name << ": Je rentre dans ma foret d’eucalyptus !" << std::endl;
    }
}

void	KoalaDoctor::setName(std::string name)
{
  this->name = name;
}

std::string	KoalaDoctor::getName()
{
  return (this->name);
}
