/*#include ".\Flight.h"*/

#include "./Flight.h"

#include <iostream>
namespace SGP{
 Flight::Flight(std::string date, std::string number, std::string airplaneNumber){
    m_date = date;
    m_number = number;
    m_airplaneNumber = airplaneNumber;
 }
 void Flight::printData(){
 std::cout << "Flight date: " << m_date << "\n";
  std::cout << "Flight number: " << m_number << "\n";
 std::cout << "Number of airplane: " << m_airplaneNumber << "\n";
 }
 std::string Flight::getNumber(){
 return m_airplaneNumber;
 }
}