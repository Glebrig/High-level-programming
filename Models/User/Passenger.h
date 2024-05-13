#pragma once
#include "User.h"
#include <string>

namespace SGP{
 class Passenger: public User{
 public:
 Passenger(){};
 Passenger(std::string name, std::string surname, int age, std::string login, std::string password, std::string numberOfTicket); 
 friend std::ostream& operator<<(std::ostream& out, Passenger& passenger);
 friend std::istream& operator>>(std::istream& in, Passenger& passenger);

 int get();
 void set(int age);

 std::string getNumber();

 friend bool operator==(const Passenger &d1, const Passenger &d2);
 friend bool operator==(const Passenger &d1, const int &d2);  
 friend bool operator!=(const Passenger &d1, const int &d2);  
 friend bool operator>(const Passenger &d1, const Passenger &d2);
 friend bool operator<(const Passenger &d1, const Passenger &d2);

 private:
 std::string m_name;
 std::string m_surname; 
 int m_age; 
 std::string m_login;
 std::string m_password;
 std::string m_numberOfTicket;
 };
}