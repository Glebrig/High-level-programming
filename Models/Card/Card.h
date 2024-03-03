#pragma once
#include <string>
namespace SGP{
 class Card{
 public:
 Card();
 Card(std::string number, std::string history);
 void printData();
 std::string getNumber();
 protected:
 std::string m_number;
 std::string m_history;
 };
}