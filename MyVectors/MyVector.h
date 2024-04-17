#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "C:\Users\Глеб\Desktop\HLP\Models\User\Employee.h"

namespace SGP {
class Vector {
private:
std::vector<Employee*> employees;
public:
void addEmployee(Employee* employee);
void removeEmployee(int index);
Employee* getEmployee(int index);
void setEmployee(int index, Employee* employee);
void printAllEmployees();
void sortByAge();
~Vector();
};
}