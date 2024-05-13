#include "./Employee.h"
#include <iostream>
#include <limits>
#include <stdexcept> 
#include <algorithm>

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

  int Employee::get(){
  return m_age;
 }

  void Employee::set(int age){
    if( (age >= 0) and (age < 100) ) {
      m_age = age;
    }
  } 

 string Employee::getPost(){
  return m_post;
 }

 std::ostream& operator<<(std::ostream& out, Employee& employee){
  out << "Name: " << employee.m_name << "\n";
  out << "Surname: " << employee.m_surname << "\n";
  out << "Age: " << employee.m_age << "\n";
  out << "Login: " << employee.m_login << "\n";
  out << "Password: " << employee.m_password << "\n";
  out << "Post: " << employee.m_post << "\n";
   return out;
  }

 std::istream& operator>>(std::istream& in, Employee& employee){
  std::cout << "Name: ";
  while(true){
    std::string input;
    in >> input;
    try {
        if (std::any_of(input.begin(), input.end(), [](char c) {
            return std::isdigit(c) || !std::isalpha(c);
        })) {
            throw std::invalid_argument("Invalid input! The name cannot contain numbers or special characters! Try again");
        }
        employee.m_name = input;
        break;
    } 
    catch (std::invalid_argument& e) {
        std::cout << e.what() << '\n';
    }
  }

   std::cout << "Surname: ";
   while(true){
    std::string input;
    in >> input;
    try {
        if (std::any_of(input.begin(), input.end(), [](char c) {
            return std::isdigit(c) || !std::isalpha(c);
        })) {
            throw std::invalid_argument("Invalid input! The surname cannot contain numbers or special characters! Try again");
        }
        employee.m_surname = input;
        break;
    } 
    catch (std::invalid_argument& e) {
        std::cout << e.what() << '\n';
    }
  }

   std::cout << "Age: " ;
   while (true) {
        try {
            if (!(in >> employee.m_age) || (employee.m_age <= 0) || (employee.m_age > 100)) {
                throw std::runtime_error("Invalid input! Age is a number from 1 to 100! Try again");
            }
            in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        } 
        catch (std::exception& e) {
          std::cout << e.what() << std::endl;
          in.clear();
          in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

   std::cout << "Login: ";
   in >> employee.m_login;
   std::cout << "Password: ";
   in >> employee.m_password;
   std::cout << "Post: ";
   in >> employee.m_post;
   std::cout << '\n';
   return in;
 }

 bool operator>(const Employee &d1, const Employee &d2){
 return d1.m_age>d2.m_age;
 }

 bool operator<(const Employee &d1, const Employee &d2){
 return d1.m_age<d2.m_age;
 }

 bool operator==(const Employee &d1, const Employee &d2){
 return ((d1.m_age==d2.m_age) && (d1.m_name==d2.m_name) && (d1.m_surname==d2.m_surname));
 }

 bool operator==(const Employee &d1, const int &d2){
 return d1.m_age==d2;
 }

 bool operator!=(const Employee &d1, const int &d2){
 return d1.m_age!=d2;
 }
}