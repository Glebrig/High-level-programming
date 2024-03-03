#include ".\Doctor.h"
#include <iostream>
namespace SGP{
 Doctor::Doctor(std::string name, std::string surname, int age, std::string login, std::string password, std::string specialization):User(name, surname, age, login, password){
    m_specialization=specialization;
 }
void Doctor::printPublicData(){
 std::cout << "Name: " << m_name << std::endl;
 std::cout << "Surname: " << m_surname << std::endl;
 std::cout << "Age: " << m_age << std::endl;
 std::cout << "Specialization: " << m_specialization << std::endl;
 } 
void Doctor::printPersonalData(){
 std::cout << "Login: " << m_login << std::endl;
 std::cout << "Password: " << m_password<< std::endl;
 }
}