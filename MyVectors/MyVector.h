#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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