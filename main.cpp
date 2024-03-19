// g++ .\main.cpp .\MyMenu\CMenuItem.cpp .\MyMenu\CMenu.cpp .\Models\User\User.cpp .\Models\Airplane\Airplane.cpp .\Models\User\Employee.cpp .\Models\Ticket\Ticket.cpp .\Models\User\Passenger.cpp

// g++ main.cpp MyMenu/CMenuItem.cpp MyMenu/CMenu.cpp Models/User/User.cpp Models/Airplane/Airplane.cpp Models/User/Employee.cpp Models/Ticket/Ticket.cpp Models/User/Passenger.cpp

#include ".\MyMenu\CMenu.h"
#include ".\MyMenu\CMenuItem.h"
#include ".\Models\User\User.h"
#include ".\Models\User\Employee.h"
#include ".\Models\User\Passenger.h"
#include ".\Models\Airplane\Airplane.h"
#include ".\Models\Ticket\Ticket.h"
#include <iostream>
#include <string>

using namespace std;

#pragma region функции-заглушки
int f1() {
    int theFirstNumber{};
    int theSecondNumber{};
    std::cout << "enter two numbers\n\n";
    std::cin >> theFirstNumber >> theSecondNumber;
    std::cout << "\nanswer: " << theFirstNumber + theSecondNumber << "\n\n";
    return 1;
}

int f2() {
    int theFirstNumber{};
    int theSecondNumber{};
    std::cout << "enter two numbers\n\n";
    std::cin >> theFirstNumber >> theSecondNumber;
    std::cout << "\nanswer: " << theFirstNumber - theSecondNumber << "\n\n";
    return 2;
}

int f3() {
    int theFirstNumber{};
    int theSecondNumber{};
    std::cout << "enter two numbers\n\n";
    std::cin >> theFirstNumber >> theSecondNumber;
    std::cout << "\nanswer: " << theFirstNumber * theSecondNumber << "\n\n";
    return 3;
}

int f4() {
    float theFirstNumber{};
    float theSecondNumber{};
    std::cout << "enter two numbers\n\n";
    std::cin >> theFirstNumber >> theSecondNumber;
    std::cout << "\nanswer: " << theFirstNumber / theSecondNumber << "\n\n";
    return 4;
}

int f5(){
    using namespace SGP;
    Employee Gleb("Gleb", "Suhanov", 18, "sgp123", "123456789", "Pilot");
    std::cout << Gleb;
    std::cout << '\n';
    return 5;
}

int f6(){
    using namespace SGP;    
    Airplane FirstPlane("12345", "MIG");
    FirstPlane.printData();
    std::cout << '\n';
    return 6;
}

const int SIZE_ARRAY = 3;
SGP::Employee arrayStaff[SIZE_ARRAY];
SGP::Passenger arrayPassengers[SIZE_ARRAY];

int f7(){
    for(int i = 1; i<SIZE_ARRAY-1; i++){
       if(arrayStaff[i].getAge() != 0 )
       {
        std::cout << arrayStaff[i];
        std::cout << '\n';
       }
    }

     for(int i = 0; i<SIZE_ARRAY; i++){
      // if(arrayPassengers[i] != nullptr)
       {
       // std::cout << arrayPassengers[i];
        std::cout << '\n';
       }
    }
    return 7;
}

int f8(){
    int choice = 0;
    std::cout << "Who do you want to add?" << '\n' << "Employee (1)" << '\n' << "Passenger (2)" << '\n';
    std::cin >> choice;
    switch (choice){
        
        case 1:
            for(int i=0; i<SIZE_ARRAY; i++){
               // if(arrayStaff[i] == nullptr)
                {
                 //   std::cin >> arrayStaff[i];
                    break;
                }
            }
        break;

        case 2:
             for(int i=0; i<SIZE_ARRAY; i++){
              //  if(arrayPassengers[i] == nullptr)
                {
               //     std::cin >> arrayPassengers[i];
                    break;
                }
            }
        break;

        default:
        std::cout << "ERROR!" << '\n';
        break;
    }
    return 8;
}

int f9(){
    int choice = 0;
    int index = -1;
    std::cout << "Who do you want to delete?" << '\n' << "Employee (1)" << '\n' << "Passenger (2)" << '\n';
    std::cin >> choice;
    std::cout << "Enter the user's number:" << '\n';
    std::cin >> index;

    switch (choice){

        case 1:
        //arrayStaff[index]->exist = false;
        break;

        case 2:
       // arrayPassengers[index]->exist = false;
        break;

        default:
        std::cout << "ERROR!" << '\n';
        break;
    }
    return 9;
}

int f10(){

    return 10;
}

#pragma endregion

const int ITEMS_NUMBER = 10;

int main() {
  using namespace SGP;
    int a = 0;
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"summation", f1}, CMenuItem{"subtraction", f2}, CMenuItem{"multiplication", f3}, CMenuItem{"division", f4}, CMenuItem{"employee", f5}, CMenuItem{"airplane", f6},
    CMenuItem{"array of users", f7}, CMenuItem{"add user", f8}, CMenuItem{"delete user", f9}, CMenuItem{"sort users", f10}};
    
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};

    return 0;
}