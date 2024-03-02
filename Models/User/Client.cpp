#include "Client.h"
#include <iostream>
namespace SGP{
 Client::Client(std::string name, std::string surname, int age, std::string login, std::string password, std::string service):User(name, surname, age, login, password ){
 m_service=service;
 }
 void SGP::Client::printPublicData(){
 std::cout << "Name: " << m_name << std::endl;
 std::cout << "Surname: " << m_surname << std::endl;
 std::cout << "Age: " << m_age << std::endl;
 }
 void Client::printPersonalData(){
 std::cout << "Login: " << m_login << std::endl;
 std::cout << "Password: " << m_password<< std::endl;
 }
}