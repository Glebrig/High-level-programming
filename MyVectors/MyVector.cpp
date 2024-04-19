#include "./MyVector.h"
#include <algorithm>
namespace SGP {

Vector::Vector(int size){
    employees = new Employee[size];
    _size = size;
}

int Vector::getSize(){
    return _size;
}

void Vector::setSize(int size){
    _size = size;
}

void Vector::addEmployee() {
   for(int i=0; i<_size; i++){
        if(employees[i].getAge()==0){
            Employee added;
            std::cin >> added;
            employees[i]=added;
            i = _size+1;
        }
   }

    if(employees[_size-1].getAge() != 0){
        Employee* temporary = new Employee[_size*2];
        for(int j=0; j<_size; j++){
            temporary[j]=employees[j];
        }
        setSize(_size*2);
        employees = new Employee[_size];
        for(int j=0; j<_size; j++){
            employees[j] = temporary[j];
        }
    }
}

void Vector::removeEmployee(int index) {
    employees[index].setAge(0);
}

Employee Vector::getEmployee(int index) {
        return employees[index];
    }

void Vector::setEmployee(int index, Employee employee) {
        employees[index] = employee;
}

void Vector::printAllEmployees() {
    for(int i=0; i<_size;i++){
        if(employees[i].getAge() != 0){
            std::cout << employees[i] << '\n';
        }

    }
}

void Vector::sortByAge(int direction) {
    Employee swap;
    if(direction == 1){
        for(int j=0; j<20; j++){
            for(int i=0; i<_size-1; i++){
                if(employees[i] > employees[i+1]){
                    swap = employees[i];
                    employees[i] = employees[i+1];
                    employees[i+1] = swap;
                }
            }
        }
    }
    if(direction == 2){
        for(int j=0; j<20; j++){
            for(int i=0; i<_size-1; i++){
                if(employees[i] < employees[i+1]){
                    swap = employees[i];
                    employees[i] = employees[i+1];
                    employees[i+1] = swap;
                }
            }
        }
    }
}

Vector::~Vector(){};
}