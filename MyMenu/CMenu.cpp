#include "./CMenu.h"
#include <iostream>
#include <limits>
#include <stdexcept> 
#include <string>

namespace SGP {
CMenu::CMenu(string title, CMenuItem *items, size_t count) : title(title), items(items), count(count) {}

int CMenu::getSelect() const {
    return select;
}

bool CMenu::isRun() const {
    return running;
}

size_t CMenu::getCount() const {
    return count;
}

string CMenu::getTitle() {
    return title;
}

CMenuItem *CMenu::getItems() {
    return items;
}

void CMenu::print() {
    for (size_t i{}; i < count; ++i) {
        std::cout << i + 1 << ". ";
        items[i].print();
        std::cout << std::endl;
    }
    std::cout << "0. exit" << std::endl;
}

int CMenu::runCommand() {
     while (k1 == 0) {
        std::cout << "Authorization: \n";
        std::cout << "Enter your username: ";
        std::cin >> username;
        try {
            if (username != "gleb") {
                throw std::runtime_error("The user was not found!");
            }
            k1++;
            break;
        } 
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

     while (k2 == 0) {
        std::cout << "Enter your password: ";
        std::cin >> password;
        try {
            if (password != "123") {
                throw std::runtime_error("The password is incorrect!");
            }
            k2++;
            break;
        } 
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    print();
    std::cout << "\n   Select >> ";

    while (true) {
        try {
            if (!(std::cin >> select) || (select < 0) || (select > 11)) {
                throw std::runtime_error("Invalid input! Enter a number from 0 to 11!");
            }
            break;
        } 
        catch (std::exception& e) {
            std::cout << e.what() << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    return items[select - 1].run();
}
}