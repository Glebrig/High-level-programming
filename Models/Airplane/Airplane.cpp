#include "./Airplane.h"
#include <iostream>
#include <limits>
#include <stdexcept> 

namespace SGP{
  
 Airplane::Airplane(int number, std::string brand){
    m_number = number;
    m_brand = brand;
 }

 int Airplane::get(){
 return m_number;
 }

 void Airplane::set(int num){
   m_number = num;
  } 

 std::ostream& operator<<(std::ostream& out, Airplane& airplane){
    out << "Number of airplane: " << airplane.m_number << "\n";
    out << "Brand: " << airplane.m_brand << "\n";
    return out;
}

std::istream& operator>>(std::istream& in, Airplane& airplane){
    std::cout << "Number of airplane: ";
    
    while (true) {
        try {
            if (!(in >> airplane.m_number) || (airplane.m_number <= 0)) {
                throw std::runtime_error("Invalid input! The airplane number is a positive integer! Try again");
            }
            in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        } 
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
            in.clear();
            in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

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
 return ((d1.m_number==d2.m_number) && (d1.m_brand == d2.m_brand));
 }

 bool operator==(const Airplane &d1, const int &d2){
 return d1.m_number==d2;
 }

 bool operator!=(const Airplane &d1, const int &d2){
 return d1.m_number!=d2;
 }

}