#pragma once
#include "User.h"
#include <string>
namespace SGP{
 class Employee:public User
 {
 public:
 Employee(){};
 Employee(std::string name, std::string surname, int age, std::string login, std::string password, std::string post);

 int get();
 void set(int age);
 std::string getPost();

 void printData();

 friend std::ostream& operator<<(std::ostream& out, Employee& employee);
 friend std::istream& operator>>(std::istream& in, Employee& employee);
 
 friend bool operator==(const Employee &d1, const Employee &d2); 
 friend bool operator==(const Employee &d1, const int &d2); 
 friend bool operator!=(const Employee &d1, const int &d2); 
 friend bool operator>(const Employee &d1, const Employee &d2);
 friend bool operator<(const Employee &d1, const Employee &d2);
 
 private:
 std::string m_name;
 std::string m_surname; 
 int m_age; 
 std::string m_login;
 std::string m_password;
 std::string m_post;
 };
}