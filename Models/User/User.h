#pragma once
#include <string>
namespace SGP{
 class User {
 public:
 User(){};
 User(std::string name, std::string surname, int age, std::string login, std::string password);
 protected:
 std::string m_name;
 std::string m_surname;
 int m_age;
 std::string m_login;
 std::string m_password;
 };
}