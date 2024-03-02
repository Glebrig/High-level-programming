#include ".\Car.h"
#include <iostream>
namespace SGP{
 Car::Car(std::string brand, int price, int release_year, std::string colour){
    m_brand = brand;
    m_price = price;
    m_release_year = release_year;
    m_colour = colour;
 }
 void Car::printData(){
 std::cout << "Brand of car: " << m_brand << "\n";
 std::cout << "Price: " << m_price << "\n";
 std::cout << "Release year: " << m_release_year << "\n";
 std::cout << "Colour: " <<  m_colour << "\n";
 }
 std::string Car::getBrand(){
 return m_brand;
 }
}