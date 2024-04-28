#include "./Airplane.h"
#include <iostream>
namespace SGP{
  
 Airplane::Airplane(unsigned int number, std::string brand){
    m_number = number;
    m_brand = brand;
 }

 unsigned int Airplane::get(){
 return m_number;
 }

 void Airplane::set(unsigned int num){
   if( (num >= 0) and (num < 100) ) {
   m_number = num;
   }
} 

  void Airplane::printData(){
  std::cout << "Number of airplane: " << m_number << "\n";
  std::cout << "Brand: " << m_brand << "\n";
 }

 std::ostream& operator<<(std::ostream& out, Airplane& airplane){
   airplane.printData();
   return out;
}

 std::istream& operator>>(std::istream& in, Airplane& airplane){
   std::cout << "Number of airplane: ";
   in >> airplane.m_number;
   std::cout << "Brand: ";
   in >> airplane.m_brand;
   return in;
 }

 bool operator>(const Airplane &d1, const Airplane &d2){
 return d1.m_number>d2.m_number;
 }

 bool operator<(const Airplane &d1, const Airplane &d2){
 return d1.m_number<d2.m_number;
 }

 bool operator==(const Airplane &d1, const Airplane &d2){
 return d1.m_number==d2.m_number;
 }

 bool operator==(const Airplane &d1, const unsigned int &d2){
 return d1.m_number==d2;
 }

 bool operator!=(const Airplane &d1, const unsigned int &d2){
 return d1.m_number!=d2;
 }

}