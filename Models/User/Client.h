#pragma once
#include "User.h"
#include <string>
namespace SGP{
 class Client: public User{
 public:
 Client();
 void printPublicData();
 void printPersonalData();
 Client(std::string name, std::string surname, int age, std::string login, std::string password, std::string service);
 protected:
 std::string m_service;
 };
}