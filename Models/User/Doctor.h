#pragma once
#include "User.h"
#include <string>
namespace SGP{
 class Doctor:public User
 {
 public:
 void printPublicData() ;
 void printPersonalData() ;
 Doctor(std::string name, std::string surname, int age, std::string login, std::string password, std::string specialization);
 private:
 std::string m_specialization;
 };
}