#include "./CMenuItem.h"

namespace SGP{
CMenuItem::CMenuItem(std::string name, Func func) : item_name(name), func(func) {}

string CMenuItem::getName() {
    return item_name;
}

void CMenuItem::print() {
    std::cout << item_name;
}

int CMenuItem::run() {
    return func();
}
}