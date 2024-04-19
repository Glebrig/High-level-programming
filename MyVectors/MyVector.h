#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "C:\Users\Глеб\Desktop\HLP\Models\User\Employee.h"

namespace SGP {
class Vector {
private:
Employee* employees;
public:
int _size;
Vector(int size);

int getSize();
void setSize(int size);

void printAllEmployees();
void addEmployee();
void removeEmployee(int index);
Employee getEmployee(int index);
void setEmployee(int index, Employee employee);
void sortByAge(int direction);
bool isEmpty();

~Vector();
};
}