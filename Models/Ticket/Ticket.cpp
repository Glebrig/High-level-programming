/*#include ".\Ticket.h"*/

#include "./Ticket.h"

#include <iostream>
namespace SGP{
 Ticket::Ticket(std::string date, std::string flightNumber, std::string FIO){
    m_date = date;
    m_flightNumber = flightNumber;
    m_FIO = FIO;
 }
 void Ticket::printData(){
 std::cout << "Flight date: " << m_date << "\n";
  std::cout << "Flight number: " << m_flightNumber << "\n";
 std::cout << "FIO: " << m_FIO << "\n";
 }
 std::string Ticket::getNumber(){
 return m_flightNumber;
 }
}