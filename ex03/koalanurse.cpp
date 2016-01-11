/*
** koalaNurse.cpp for koalaNurse in /home/petit_x/Epitech/rendu/Piscine_cpp/piscine_cpp_d06/ex02
** 
** Made by marlon petit
** Login   <petit_x@Spontox>
** 
** Started on  Mon Jan 11 17:52:34 2016 marlon petit
** Last update Mon Jan 11 20:35:36 2016 marlon petit
*/

#include <fstream>
#include <iostream>
#include <string>

#include "sickkoala.h"
#include "koalanurse.h"

koalaNurse::koalaNurse(int id)
{
  this->id = id;
  this->working = false;
}

koalaNurse::~koalaNurse()
{
  std::cout << "Nurse " << this->id << ": Enfin un peu de repos !" << std::endl;
}

void	koalaNurse::giveDrug(std::string drug, sickKoala *patient)
{
  patient->takeDrug(drug);
}

std::string	koalaNurse::readReport(std::string report)
{
  std::string	ret;
  std::fstream fs (report.c_str(), std::ios::in);
  if (fs.is_open())
    {
      ret = fs.get();
      while (fs.good())
	ret += fs.get();
      ret.erase(ret.end() - 1);
      report.erase(report.end() -7, report.end());
      std::cout << "Nurse " << this->id << ": Kreog ! Il faut donner un " << ret << " a Mr." << report <<" !" <<  std::endl;
    }
  return (ret);
}

void	koalaNurse::timeCheck()
{
  if (this->working == false)
    {
      this->working = true;
      std::cout << "Nurse " << this->id << ": Je commence le travail !" <<  std::endl;
    }
  else
    {
      this->working = false;
      std::cout << "Nurse " << this->id << ": Je rentre dans ma foret d’eucalyptus !" << std::endl;
    }
}

void	koalaNurse::setId(int id)
{
  this->id = id;
}

int	koalaNurse::getId()
{
  return (this->id);
}
