#pragma once
#include "User.h"
#include <string>
namespace SGP{
 class Patient: public User{
 public:
 Patient();
 void printPublicData();
 void printPersonalData();
 Patient(std::string name, std::string surname, int age, std::string login, std::string password, std::string number);
 protected:
 std::string m_number;
 };
}