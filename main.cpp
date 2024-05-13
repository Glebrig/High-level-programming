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
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#pragma region функции-заглушки

SGP::Vector<SGP::Employee> arrayStaff(3);
SGP::Vector<SGP::Passenger> arrayPassengers(3);
SGP::Vector<SGP::Airplane> arrayPlanes(3);

int f1(){
     system("cls");
     arrayStaff.printAll();
     std::cout << "\n";
     arrayPassengers.printAll();
    return 1;
}

int f2(){
    system("cls");
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
    system("cls");
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
    system("cls");
    int choice = 0;
    int index = -1;
    std::cout << "Who do you want to edit?" << '\n' << "Employee (1)" << '\n' << "Passenger (2)" << '\n';
    std::cin >> choice;
    std::cout << "Enter the user's number:" << '\n';
    std::cin >> index;
    index-=1;
    switch (choice){
        
        case 1:
        arrayStaff.edit(index);
        break;

        case 2:
        arrayPassengers.edit(index);
        break;

        default:
        std::cout << "ERROR!" << '\n';
        break;
    }
    std::cout <<'\n';
    return 4;
}

int f5(){
    system("cls");
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
    return 5;
}

int f6(){
    system("cls");
    arrayPlanes.printAll();
    std::cout << "\n";
    return 6;
}

int f7(){
    system("cls");
    arrayPlanes.add(); 
    return 7;
}

int f8(){   
    system("cls");
    int index = -1;
    std::cout << "Enter the airplanes number:" << '\n';
    std::cin >> index;
    index-=1;
    arrayPlanes.remove(index);   
    std::cout <<'\n';
    return 7;
}

int f9(){
    system("cls");
    int index = -1;
    std::cout << "Enter the airplanes number:" << '\n';
    std::cin >> index;
    index-=1;
    arrayPlanes.edit(index);   
    std::cout <<'\n';
    return 9;
}

int f10(){
    system("cls");
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
    return 10;
}

int f11(){
    system("cls");
    arrayStaff.saveAll(1);
    arrayPassengers.saveAll(2);
    arrayPlanes.saveAll(3);
    return 11;
}

int f12(){
    arrayStaff.loadStaff();
    arrayPassengers.loadPassengers();
    arrayPlanes.loadPlanes();
    return 12;
}

#pragma endregion

const int ITEMS_NUMBER = 12;

int main() {
  using namespace SGP;
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"array of users", f1}, CMenuItem{"add user", f2}, CMenuItem{"delete user", f3},
    CMenuItem{"edit users", f4}, CMenuItem{"sort users by age", f5}, CMenuItem{"array of airplanes", f6}, 
    CMenuItem{"add airplane", f7}, CMenuItem{"delete airplane", f8}, CMenuItem{"edit planes", f9}, 
    CMenuItem{"sort airplanes by number", f10}, CMenuItem{"saving databases", f11}, CMenuItem{"loading databases", f12}};
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};

    return 0;
}