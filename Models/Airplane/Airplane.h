#pragma once
#include <string>

namespace SGP{
 class Airplane{
 public:
 Airplane(){};
 Airplane(int number, std::string brand);
 int get();
 void set(int num);

 friend std::ostream& operator<<(std::ostream& out, Airplane& airplane);
 friend std::istream& operator>>(std::istream& in, Airplane& airplane);
 
 friend bool operator==(const Airplane &d1, const Airplane &d2); 
 friend bool operator==(const Airplane &d1, const int &d2); 
 friend bool operator!=(const Airplane &d1, const int &d2); 
 friend bool operator>(const Airplane &d1, const Airplane &d2);
 friend bool operator<(const Airplane &d1, const Airplane &d2);

 protected:
 int m_number;
 std::string m_brand;
 };
}