#pragma once
#include <string>
namespace SGP{
 class Consultation{
 public:
 Consultation();
 Consultation(std::string time, std::string recommendations, std::string name);
 void printData();
 std::string getName();
 protected:
 std::string m_time;
 std::string m_recommendations;
 std::string m_name;
 };
}