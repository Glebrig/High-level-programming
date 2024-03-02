#pragma once
#include "User.h"
#include <string>
namespace SGP{
 class Employee:public User
 {
 public:
 void printPublicData() ;
 void printPersonalData() ;
 Employee(std::string name, std::string surname, int age, std::string login, std::string password, std::string post);
 private:
 std::string m_post;
 };
}