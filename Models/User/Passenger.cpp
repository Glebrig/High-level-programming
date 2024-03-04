#include "./Passenger.h"
#include <iostream>
namespace SGP{
 Passenger::Passenger(std::string name, std::string surname, int age, std::string login, std::string password, std::string numberOfTicket):User(name, surname, age, login, password ){
 m_numberOfTicket = numberOfTicket;
 }
 void SGP::Passenger::printPublicData(){
 std::cout << "Name: " << m_name << std::endl;
 std::cout << "Surname: " << m_surname << std::endl;
 std::cout << "Age: " << m_age << std::endl;
 std::cout << "Number of card: " << m_numberOfTicket << std::endl;
 }
 void Passenger::printPersonalData(){
 std::cout << "Login: " << m_login << std::endl;
 std::cout << "Password: " << m_password<< std::endl;
 }
}