// g++ .\main.cpp .\MyMenu\CMenuItem.cpp .\MyMenu\CMenu.cpp .\Models\Airplane\Airplane.cpp .\Models\User\User.cpp .\Models\User\Employee.cpp .\Models\User\Passenger.cpp

// g++ main.cpp MyMenu/CMenuItem.cpp MyMenu/CMenu.cpp Models/Airplane/Airplane.cpp Models/User/User.cpp Models/User/Employee.cpp Models/User/Passenger.cpp

#include "./MyMenu/CMenu.h"
#include "./MyMenu/CMenuItem.h"
#include "./Models/User/User.h"
#include "./Models/User/Employee.h"
#include "./Models/User/Passenger.h"
#include "./Models/Airplane/Airplane.h"
#include "./MyVectors/MyVector.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#pragma region функции-заглушки

SGP::Vector<SGP::Employee> arrayStaff(3);
SGP::Vector<SGP::Passenger> arrayPassengers(3);
SGP::Vector<SGP::Airplane> arrayPlanes(3);

int f1(){
     arrayStaff.printAll();
     std::cout << "\n";
     arrayPassengers.printAll();
    return 1;
}

int f2(){
    int choice = 0;
    std::cout << "Who do you want to add?" << '\n' << "Employee (1)" << '\n' << "Passenger (2)" << '\n';
    std::cin >> choice;
    switch (choice){
        
        case 1:
        {
            arrayStaff.add();
        }
        break;

        case 2:
        {
            arrayPassengers.add();
        }
        break;

        default:
        std::cout << "ERROR!" << '\n';
        break;
    }
    std::cout <<'\n' << '\n';
    return 2;
}

int f3(){
    int choice = 0;
    int index = -1;
    std::cout << "Who do you want to delete?" << '\n' << "Employee (1)" << '\n' << "Passenger (2)" << '\n';
    std::cin >> choice;
    std::cout << "Enter the user's number:" << '\n';
    std::cin >> index;
    index-=1;
    switch (choice){

        case 1:
        arrayStaff.remove(index);
        break;

        case 2:
        arrayPassengers.remove(index);
        break;

        default:
        std::cout << "ERROR!" << '\n';
        break;
    }
    std::cout <<'\n' << '\n';
    return 3;
}

int f4(){
    int choice = 0;
    int direction = 0; 
    std::cout << "Who do you want to sort?" << '\n' << "Employee (1)" << '\n' << "Passenger (2)" << '\n';
    std::cin >> choice;
    std::cout << "Select the sorting direction" << '\n' << " Increase (1)" << '\n' << "Decrease (2)" << '\n';
    std::cin >> direction;
    switch(choice){

        case 1: //Employee
        {
            switch(direction){
                case 1:
                {
                    arrayStaff.sort(1);  
                    break;
                }
   
                case 2:
                {
                    arrayStaff.sort(2);   
                    break;
                }   
        
                default:
                {
                    std::cout << "ERROR!" << '\n';
                break; 
                } 
            }
            break;
        }


        case 2: //Passenger
        {
            switch(direction){
               case 1:
                {
                    arrayPassengers.sort(1);  
                    break;
                }
   
                case 2:
                {
                    arrayPassengers.sort(2);   
                    break;
                }   
        
                default:
                {
                    std::cout << "ERROR!" << '\n';
                break; 
                }   
              
            }
            break;
        }

        default:
        std::cout << "ERROR!" << '\n';
        break;
    }
    std::cout <<'\n' << '\n';
    return 4;
}

int f5(){
    arrayPlanes.printAll();
    std::cout << "\n";
    return 5;
}

int f6(){
    arrayPlanes.add(); 
    return 6;
}

int f7(){   
    int index = -1;
    std::cout << "Enter the airplanes number:" << '\n';
    std::cin >> index;
    index-=1;
    arrayPlanes.remove(index);   
    std::cout <<'\n';
    return 7;
}

int f8(){
    int direction = 0; 
    std::cout << "Select the sorting direction" << '\n' << " Increase (1)" << '\n' << "Decrease (2)" << '\n';
    std::cin >> direction;
    
    switch(direction){
        case 1:
        {
            arrayPlanes.sort(1);  
            break;
        }
   
        case 2:
        {
            arrayPlanes.sort(2);   
            break;
        }   
        
        default:
        {
            std::cout << "ERROR!" << '\n';
            break; 
        } 
    }
return 8;
}

#pragma endregion

const int ITEMS_NUMBER = 8;

int main() {
  using namespace SGP;
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"array of users", f1}, CMenuItem{"add user", f2}, CMenuItem{"delete user", f3}, 
    CMenuItem{"sort users by age", f4}, CMenuItem{"array of airplanes", f5}, CMenuItem{"add airplane", f6}, 
    CMenuItem{"delete airplane", f7}, CMenuItem{"sort airplanes by number", f8}};
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};

    return 0;
}