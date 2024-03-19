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

std::ostream& operator<<(std::ostream& out, Passenger& passenger){
   out << "Name: " << passenger.m_name << std::endl;
   out << "Sername: " << passenger.m_surname << std::endl;
   out << "Age: " << passenger.m_age << std::endl;
   out << "Login: " << passenger.m_login << std::endl;
   out << "Password: " << passenger.m_password << std::endl;
   out << "Number of ticket: " << passenger.m_numberOfTicket << std::endl;
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
 return d1.m_numberOfTicket>d2.m_numberOfTicket;
 }

 bool operator<(const Passenger &d1, const Passenger &d2){
 return d1.m_numberOfTicket<d2.m_numberOfTicket;
 }

 bool operator==(const Passenger &d1, const Passenger &d2){
 return d1.m_numberOfTicket==d2.m_numberOfTicket;
 }

}