#pragma once
#include <string>
namespace SGP{
 class Car{
 public:
 Car();
 Car(std::string brand, int price, int release_year, std::string colour);
 void printData();
 std::string getBrand();
 protected:
 std::string m_brand;
 int m_price;
 int m_release_year;
 std::string m_colour;
 };
}