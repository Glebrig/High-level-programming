#include "./Passenger.h"
#include <iostream>
#include <limits>
#include <stdexcept> 
#include <algorithm>

namespace SGP{
 Passenger::Passenger(std::string name, std::string surname, int age, std::string login, std::string password, std::string numberOfTicket):User(name, surname, age, login, password ){
    m_name = name;
    m_surname = surname;
    m_age = age;
    m_login = login;
    m_password = password;
    m_numberOfTicket = numberOfTicket;
 }

 int Passenger::get(){
  return m_age;
 }

  void Passenger::set(int age){
    if( (age >= 0) and (age < 100) ) {
      m_age = age;
    }
  } 

std::ostream& operator<<(std::ostream& out, Passenger& passenger){
  out << "Name: " << passenger.m_name << "\n";
  out << "Surname: " << passenger.m_surname << "\n";
  out << "Age: " << passenger.m_age << "\n";
  out << "Login:" << passenger.m_login << "\n";
  out << "Password: " << passenger.m_password << "\n";
  out << "Number of ticket: " << passenger.m_numberOfTicket << "\n";
  return out;
  }

 std::istream& operator>>(std::istream& in, Passenger& passenger){
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
        passenger.m_name = input;
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
        passenger.m_surname = input;
        break;
    } 
    catch (std::invalid_argument& e) {
        std::cout << e.what() << '\n';
    }
  }

   std::cout << "Age: " ;
   while (true) {
        try {
            if (!(in >> passenger.m_age) || (passenger.m_age <= 0) || (passenger.m_age > 100)) {
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
   in >> passenger.m_login;
   std::cout << "Password: ";
   in >> passenger.m_password;
   std::cout << "Number of ticket: ";
   in >> passenger.m_numberOfTicket;
   std::cout << '\n';
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