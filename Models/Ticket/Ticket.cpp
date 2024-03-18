/*#include ".\Ticket.h"*/

#include "./Ticket.h"

#include <iostream>
namespace SGP{
 Ticket::Ticket(std::string date, std::string flightNumber, std::string FIO, std::string airplaneNumber){
    m_date = date;
    m_flightNumber = flightNumber;
    m_FIO = FIO;
    m_airplaneNumber = airplaneNumber;
 }
 void Ticket::printData(){
  std::cout << "Flight date: " << m_date << "\n";
  std::cout << "Flight number: " << m_flightNumber << "\n";
  std::cout << "FIO: " << m_FIO << "\n";
  std::cout << "Airplane number:" << m_airplaneNumber;
 }
 std::string Ticket::getFlightNumber(){
 return m_flightNumber;
 }
}