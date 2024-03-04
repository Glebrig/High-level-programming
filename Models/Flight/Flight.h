#pragma once
#include <string>
namespace SGP{
 class Flight{
 public:
 Flight();
 Flight(std::string date, std::string number, std::string airplaneNumber);
 void printData();
 std::string getNumber();
 protected:
 std::string m_date;
 std::string m_number;
 std::string m_airplaneNumber;
 };
}