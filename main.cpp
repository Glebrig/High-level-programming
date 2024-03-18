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
    Airplane FitstCard("12345", "MIG");
    FitstCard.printData();
    std::cout << '\n';
    return 6;
}

#pragma endregion

const int ITEMS_NUMBER = 6;


int main() {
  using namespace SGP;
    CMenuItem items[ITEMS_NUMBER] {CMenuItem{"summation", f1}, CMenuItem{"subtraction", f2}, CMenuItem{"multiplication", f3}, CMenuItem{"division", f4}, CMenuItem{"employee", f5}, CMenuItem{"airplane", f6}};
    CMenu menu("My console menu", items, ITEMS_NUMBER);
    while (menu.runCommand()) {};

    return 0;
}