#pragma once
#include "User.h"
#include <string>
namespace SGP{
 class Passenger: public User{
 public:
 Passenger();
 void printPublicData();
 void printPersonalData();
 Passenger(std::string name, std::string surname, int age, std::string login, std::string password, std::string numberOfTicket);
 protected:
 std::string  m_numberOfTicket;
 };
}