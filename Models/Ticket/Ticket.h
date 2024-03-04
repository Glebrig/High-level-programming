#pragma once
#include <string>
namespace SGP{
 class Ticket{
 public:
 Ticket();
 Ticket(std::string date, std::string flightNumber, std::string FIO);
 void printData();
 std::string getNumber();
 protected:
 std::string m_date;
 std::string m_flightNumber;
 std::string m_FIO;
 };
}