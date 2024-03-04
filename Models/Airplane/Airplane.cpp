/*#include ".\Airplane.h"*/

#include "./Airplane.h"

#include <iostream>
namespace SGP{
 Airplane::Airplane(std::string number, std::string brand){
    m_number = number;
    m_brand = brand;
 }
 void Airplane::printData(){
 std::cout << "Number of airplane: " << m_number << "\n";
 std::cout << "Brand: " << m_brand << "\n";
 }
 std::string Airplane::getNumber(){
 return m_number;
 }
}