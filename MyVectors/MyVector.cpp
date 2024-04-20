#include "./MyVector.h"
#include <algorithm>
namespace SGP {

Vector::Vector(int size){
    employees = new Employee[size];
    _size = size;
    for(int i=0; i<_size; i++){
        employees[i].setAge(0);
    }
}

int Vector::getSize(){
    return _size;
}

void Vector::setSize(int size){
    _size = size;
}

bool Vector::isEmpty(int index){
    return (employees[index].getAge()==0);
}

void Vector::addEmployee() {
   for(int i=0; i<_size; i++){
        if(isEmpty(i)){
            Employee added;
            std::cin >> added;
            employees[i]=added;
            i = _size+1;
        }
   }

    if(isEmpty(_size-1) == false){
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
    
    for(int i=0; i<_size-1; i++){
        for(int j=i+1; j<_size; j++){
            if(isEmpty(i)){
                employees[i]=employees[j];
                employees[j].setAge(0);
            }
        }
    }

    if(isEmpty(_size%2)){
        Employee* temporary = new Employee[_size%2];
        for(int j=0; j<_size%2; j++){
            temporary[j]=employees[j];
        }
        setSize(_size%2);
        employees = new Employee[_size];
        for(int j=0; j<_size; j++){
            employees[j] = temporary[j];
        }
    }
}

Employee Vector::getEmployee(int index) {
        return employees[index];
    }

void Vector::setEmployee(int index, Employee employee) {
        employees[index] = employee;
}

void Vector::printAllEmployees() {
    for(int i=0; i<_size;i++){
        if(isEmpty(i) == false){
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
}