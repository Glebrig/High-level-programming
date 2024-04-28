#pragma once
#include <string>
namespace SGP{
 class Airplane{
 public:
 Airplane(){};
 Airplane(unsigned int number, std::string brand);

 unsigned int get();
 void set(unsigned int num);

 void printData();

 friend std::ostream& operator<<(std::ostream& out, Airplane& airplane);
 friend std::istream& operator>>(std::istream& in, Airplane& airplane);
 
 friend bool operator==(const Airplane &d1, const Airplane &d2); 
 friend bool operator==(const Airplane &d1, const unsigned int &d2); 
 friend bool operator!=(const Airplane &d1, const unsigned int &d2); 
 friend bool operator>(const Airplane &d1, const Airplane &d2);
 friend bool operator<(const Airplane &d1, const Airplane &d2);

 protected:
 unsigned int m_number;
 std::string m_brand;
 };
}