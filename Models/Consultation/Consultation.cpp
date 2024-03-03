#include ".\Consultation.h"
#include <iostream>
namespace SGP{
 Consultation::Consultation(std::string time, std::string recommendations, std::string name){
    m_time = time;
    m_recommendations = recommendations;
    m_name = name;
 }
 void Consultation::printData(){
 std::cout << "Reception time: " << m_time << "\n";
 std::cout << "Recommendations: " << m_recommendations << "\n";
 std::cout << "Doctor's name: " << m_name << "\n";
 }
 std::string Consultation::getName(){
 return m_name;
 }
}