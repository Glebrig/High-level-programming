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
    Gleb.printPublicData();
    Gleb.printPersonalData();
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

const int SIZE_ARRAY = 2;
SGP::User* arrayUsers[SIZE_ARRAY];

int f7(){
    for(int i = 0; i<SIZE_ARRAY; i++){
        arrayUsers[i]->printPersonalData();//!
    }
    return 7;
}

int f8(){
    SGP::Employee *addUser;
    std::cin >> *addUser;
    //
    return 8;
}

int f9(){

    return 9;
}

int f10(){

    return 10;
}

int f11(){

    return 11;
}

#pragma endregion

const int ITEMS_NUMBER = 11;

int main() {
  using namespace SGP;
    int a = 0;
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"summation", f1}, CMenuItem{"subtraction", f2}, CMenuItem{"multiplication", f3}, CMenuItem{"division", f4}, CMenuItem{"employee", f5}, CMenuItem{"airplane", f6},
    CMenuItem{"array of users", f7}, CMenuItem{"add employee", f8}, CMenuItem{"add passenger", f9}, CMenuItem{"delete user", f10}, CMenuItem{"edit user", f11}};
    
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};

    return 0;
}