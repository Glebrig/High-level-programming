#include "./MyVector.h"
#include <algorithm>
namespace SGP {
void Vector::addEmployee(Employee* employee) {
    employees.push_back(employee);
}

void Vector::removeEmployee(int index) {
    if (index >= 0 && index < employees.size()) {
        delete employees[index];
        employees.erase(employees.begin() + index);
    }
}

Employee* Vector::getEmployee(int index) {
    if (index >= 0 && index < employees.size()) {
        return employees[index];
    }
    return nullptr;
}

void Vector::setEmployee(int index, Employee* employee) {
    if (index >= 0 && index < employees.size()) {
        delete employees[index];
        employees[index] = employee;
    }
}

void Vector::printAllEmployees() {
    for (int i=0; i<10; i++) {
            std::cout << employees[i] << '\n';

    }
}

void Vector::sortByAge() {
    std::sort(employees.begin(), employees.end(), [](Employee* a, Employee* b) {
        return *a < *b;
    });
}

Vector::~Vector() {
    for (Employee* employee : employees) {
        delete employee;
    }
      employees.clear();
}
}