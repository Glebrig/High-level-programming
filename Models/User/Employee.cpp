/*#include ".\Employee.h"*/

#include "./Employee.h"

#include <iostream>
using namespace std;
namespace SGP{
  
 Employee::Employee(std::string name, std::string surname, int age, std::string login, std::string password, std::string post):User(name, surname, age, login, password){
    m_name = name;
    m_surname = surname;
    m_age = age;
    m_login = login;
    m_password = password;
    m_post=post;
 }

  int Employee::getAge(){
  return m_age;
 }

  void Employee::setAge(int age){
    if( (age >= 0) and (age < 100) ) {
      m_age = age;
    }
  } 

 string Employee::getPost(){
  return m_post;
 }

  void Employee::printData(){
  std::cout << "Name: " << m_name << "\n";
  std::cout << "Surname: " << m_surname << "\n";
  std::cout << "Age: " << m_age << "\n";
  std::cout << "Login:" << m_login << "\n";
  std::cout << "Password: " << m_password << "\n";
  std::cout << "Post: " << m_post << "\n";
 }

 std::ostream& operator<<(std::ostream& out, Employee& employee){
   employee.printData();
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

 bool operator>(const Employee &d1, const Employee &d2){
 return d1.m_age>d2.m_age;
 }

 bool operator<(const Employee &d1, const Employee &d2){
 return d1.m_age<d2.m_age;
 }

 bool operator==(const Employee &d1, const Employee &d2){
 return d1.m_age==d2.m_age;
 }

 bool operator==(const Employee &d1, const int &d2){
 return d1.m_age==d2;
 }

 bool operator!=(const Employee &d1, const int &d2){
 return d1.m_age!=d2;
 }

}