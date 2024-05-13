#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <stdexcept> 
#include <vector>
#include <algorithm>
#include "C:\Users\Глеб\Desktop\HLP\Models\User\User.h"
#include "C:\Users\Глеб\Desktop\HLP\Models\User\Employee.h"
#include "C:\Users\Глеб\Desktop\HLP\Models\User\Passenger.h"
#include "C:\Users\Глеб\Desktop\HLP\Models\Airplane\Airplane.h"

namespace SGP {
template <class V> class Vector{
private:
V* cells;
public:
int _size;

Vector(int size){
    cells = new V[size];
    _size = size;
    for(int i=0; i<_size; i++){
        cells[i].set(0);
    }
}

int getSize(){
    return _size;
}

void setSize(int size){
    _size = size;
}

void printAll(){
    for(int i=0; i<_size;i++){
        if(isEmpty(i) == false){
            std::cout << cells[i] << '\n';
        }

    }
}

void saveAll(int n){
 std::ofstream file;
 switch(n){
    case 1:
    file.open("file1.txt");
    for(int i=0; i<_size;i++){
        if(isEmpty(i) == false){
            file << cells[i];
        }
    }
    file.close();
    break;

 case 2:
    file.open("file2.txt");
    for(int i=0; i<_size;i++){
        if(isEmpty(i) == false){
            file << cells[i];
        }
    }
    file.close();
    break;

 case 3:
    file.open("file3.txt");
    for(int i=0; i<_size;i++){
        if(isEmpty(i) == false){
            file << cells[i];
        }
    }
    file.close();
    break;
 }
}

void loadStaff(){
    std::ifstream file;
    std::string anything;
    std::string name; std::string surname; int age; std::string login; std::string password; std::string post;
        Employee previous;
        Employee added;
        file.open("file1.txt");
        if(file.is_open()){
            while(!file.eof()){
            file >> anything >> name;
            file >> anything >> surname;
            file >> anything >> age;
            file >> anything >> login;
            file >> anything >> password;
            file >> anything >> post;
            added = Employee(name, surname, age, login, password, post);
            if((added.get() != 0) && (added.get() != previous.get()) && (added.getPost() != " ")){
            for(int i=0; i<_size; i++){
                if(isEmpty(i)){
                cells[i] = added;
                break;
                }
            }  
            }
            previous = added;
            if(file.peek() == EOF ) {break;}
        }
        }
    file.close();
}   

void loadPassengers(){
std::ifstream file;
std::string anything;
 std::string name; std::string surname; int age; std::string login; std::string password; std::string number;
        Passenger previous;
        Passenger added;
        file.open("file2.txt");
        if(file.is_open()){
            while(!file.eof()){
            file >> anything >> name;
            file >> anything >> surname;
            file >> anything >> age;
            file >> anything >> login;
            file >> anything >> password;
            file >> anything >> anything >> anything >>  number;
            added = Passenger(name, surname, age, login, password, number);
            if((added.get() != 0) && (added.get() != previous.get()) && (added.getNumber() != " ")){
            for(int i=0; i<_size; i++){
                if(isEmpty(i)){
                cells[i]=added;
                break;
                }
            }
            }
            previous = added;
            if(file.peek() == EOF ) {break;}
        }
        }
        file.close();
}

void loadPlanes(){
std::ifstream file;
std::string anything;
 int number; std::string brand;
        Airplane previous; 
        Airplane added;
        file.open("file3.txt");
        if(file.is_open()){
            while(!file.eof()){
            file >> anything >> anything >> anything >> number;
            file >> anything >> brand; 
            added = Airplane(number, brand);
            if((added.get() != 0) && (added.get() != previous.get())){
                for(int i=0; i<_size; i++){
                    if(isEmpty(i)){
                        cells[i]=added;
                        break;
                    }
                }
            }
            previous = added;
            if(file.peek() == EOF ) {break;}
            }
        }
        file.close();
}

void add(){
   for(int i=0; i<_size; i++){
        if(isEmpty(i)){
            V added;
            std::cin >> added;
            cells[i]=added;
            i = _size+1;
        }
   }

    if(isEmpty(_size-1) == false){
        V* temporary = new V[_size*2];
        for(int j=0; j<_size; j++){
            temporary[j]=cells[j];
        }
        setSize(_size*2);
        cells = new V[_size];
        for(int j=0; j<_size; j++){
            cells[j] = temporary[j];
        }
    }
}

void remove(int index){
    cells[index].set(0);
    
    for(int i=0; i<_size-1; i++){
        for(int j=i+1; j<_size; j++){
            if(isEmpty(i)){
                cells[i]=cells[j];
                cells[j].set(0);
            }
        }
    }

    if(isEmpty(_size%2)){
       V* temporary = new V[_size%2];
        for(int j=0; j<_size%2; j++){
            temporary[j]=cells[j];
        }
        setSize(_size%2);
        cells = new V[_size];
        for(int j=0; j<_size; j++){
            cells[j] = temporary[j];
        }
    }
}

void edit(int index){
    cells[index].set(0);
    add();
}

V get(int index){
    return cells[index];
}

void set(int index, V somebody){
        cells[index] = somebody;
}

void sort(int direction){
    V swap;
    if(direction == 1){
        for(int j=0; j<20; j++){
            for(int i=0; i<_size-1; i++){
                if(cells[i] > cells[i+1]){
                    swap = cells[i];
                    cells[i] = cells[i+1];
                    cells[i+1] = swap;
                }
            }
        }
    }
    if(direction == 2){
        for(int j=0; j<20; j++){
            for(int i=0; i<_size-1; i++){
                if(cells[i] < cells[i+1]){
                    swap = cells[i];
                    cells[i] = cells[i+1];
                    cells[i+1] = swap;
                }
            }
        }
    }
}

bool isEmpty(int index){
    return (cells[index].get()==0);
}

};
}