#pragma once
#include <string>
namespace SGP{
 class Ticket{
 public:
 Ticket();
 Ticket(std::string date, std::string flightNumber, std::string FIO, std::string airplaneNumber);
 void printData();
 std::string getFlightNumber();
 protected:
 std::string m_date;
 std::string m_flightNumber;
 std::string m_FIO;
 std::string m_airplaneNumber;
 };
}