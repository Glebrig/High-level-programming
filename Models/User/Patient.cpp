#include "Patient.h"
#include <iostream>
namespace SGP{
 Patient::Patient(std::string name, std::string surname, int age, std::string login, std::string password, std::string number):User(name, surname, age, login, password ){
 m_number=number;
 }
 void SGP::Patient::printPublicData(){
 std::cout << "Name: " << m_name << std::endl;
 std::cout << "Surname: " << m_surname << std::endl;
 std::cout << "Age: " << m_age << std::endl;
 std::cout << "Number of card: " << m_number << std::endl;
 }
 void Patient::printPersonalData(){
 std::cout << "Login: " << m_login << std::endl;
 std::cout << "Password: " << m_password<< std::endl;
 }
}