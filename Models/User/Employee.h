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

 friend std::ostream& operator<<(std::ostream& out, Employee& employee);
 friend std::istream& operator>>(std::istream& in, Employee& employee);
 //!

 private:
 std::string m_post;
 };
}