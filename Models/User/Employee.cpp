/*#include ".\Employee.h"*/

#include "./Employee.h"

#include <iostream>
namespace SGP{
 Employee::Employee(std::string name, std::string surname, int age, std::string login, std::string password, std::string post):User(name, surname, age, login, password){
    m_name = name;
    m_surname = surname;
    m_age = age;
    m_login = login;
    m_password = password;
    m_post=post;
 }

 std::ostream& operator<<(std::ostream& out, Employee& employee){
   out << "Name: " << employee.m_name << std::endl;
   out << "Sername: " << employee.m_surname << std::endl;
   out << "Age: " << employee.m_age << std::endl;
   out << "Login: " << employee.m_login << std::endl;
   out << "Password: " << employee.m_password << std::endl;
   out << "Post: " << employee.m_post << std::endl;
   return out;
   }

 std::istream& operator>>(std::istream& in, Employee& employee){
   std::cout << "Name: " ;
   in >> employee.m_name;
   std::cout << "Sername: ";
   in >> employee.m_surname;
   std::cout << "Age: " ;
   in >> employee.m_age;
   std::cout << "Login: ";
   in >> employee.m_login;
   std::cout << "Password: ";
   in >> employee.m_password;
   std::cout << "Post: ";
   in >> employee.m_post;
   return in;
 }

void Employee::printPublicData(){
 std::cout << "Name: " << m_name << std::endl;
 std::cout << "Surname: " << m_surname << std::endl;
 std::cout << "Age: " << m_age << std::endl;
 std::cout << "Post: " << m_post << std::endl;
 } 
void Employee::printPersonalData(){
 std::cout << "Login: " << m_login << std::endl;
 std::cout << "Password: " << m_password<< std::endl;
 }
}