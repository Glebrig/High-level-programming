#include ".\Card.h"
#include <iostream>
namespace SGP{
 Card::Card(std::string number, std::string history){
    m_number = number;
    m_history = history;
 }
 void Card::printData(){
 std::cout << "Number of card: " << m_number << "\n";
 std::cout << "History: " << m_history << "\n";
 }
 std::string Card::getNumber(){
 return m_number;
 }
}