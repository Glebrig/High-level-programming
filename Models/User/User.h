#pragma once
#include <string>
namespace SGP{
 class User {
 public:
 User(){};
 User(std::string name, std::string surname, int age, std::string login, std::string password);

 virtual void printData() = 0;

 protected:
 std::string m_name;
 std::string m_surname;
 int m_age;
 std::string m_login;
 std::string m_password;
 };
}