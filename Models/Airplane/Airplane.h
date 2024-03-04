#pragma once
#include <string>
namespace SGP{
 class Airplane{
 public:
 Airplane();
 Airplane(std::string number, std::string brand);
 void printData();
 std::string getNumber();
 protected:
 std::string m_number;
 std::string m_brand;
 };
}