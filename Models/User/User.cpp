/*#include ".\User.h"*/

#include "./User.h"

#include <iostream>
namespace SGP{
 User::User(std::string name, std::string surname, int age, std::string login, std::string password){
 m_name=name;
 m_surname=surname;
 m_age=age;
 m_login=login;
 m_password=password;
 }
}