#include "./Passenger.h"
#include <iostream>
namespace SGP{
 Passenger::Passenger(std::string name, std::string surname, int age, std::string login, std::string password, std::string numberOfTicket):User(name, surname, age, login, password ){
    m_name = name;
    m_surname = surname;
    m_age = age;
    m_login = login;
    m_password = password;
    m_numberOfTicket = numberOfTicket;
 }

 int Passenger::getAge(){
  return m_age;
 }

  void Passenger::setAge(int age){
    if( (age >= 0) and (age < 100) ) {
      m_age = age;
    }
  } 

  void Passenger::printData(){
  std::cout << "Name: " << m_name << "\n";
  std::cout << "Surname: " << m_surname << "\n";
  std::cout << "Age: " << m_age << "\n";
  std::cout << "Login:" << m_login << "\n";
  std::cout << "Password: " << m_password << "\n";
  std::cout << "Number of ticket: " << m_numberOfTicket << "\n";
 }

std::ostream& operator<<(std::ostream& out, Passenger& passenger){
   passenger.printData();
   return out;
   }

 std::istream& operator>>(std::istream& in, Passenger& passenger){
   std::cout << "Name: " ;
   in >> passenger.m_name;
   std::cout << "Sername: ";
   in >> passenger.m_surname;
   std::cout << "Age: " ;
   in >> passenger.m_age;
   std::cout << "Login: ";
   in >> passenger.m_login;
   std::cout << "Password: ";
   in >> passenger.m_password;
   std::cout << "Number of ticket: ";
   in >> passenger.m_numberOfTicket;
   return in;
 }

 bool operator>(const Passenger &d1, const Passenger &d2){
 return d1.m_age>d2.m_age;
 }

 bool operator<(const Passenger &d1, const Passenger &d2){
 return d1.m_age<d2.m_age;
 }

 bool operator==(const Passenger &d1, const Passenger &d2){
 return d1.m_age==d2.m_age;
 }

 bool operator==(const Passenger &d1, const int &d2){
 return d1.m_age==d2;
 }

 bool operator!=(const Passenger &d1, const int &d2){
 return d1.m_age!=d2;
 }

}