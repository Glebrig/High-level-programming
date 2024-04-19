#include "./VectorForPassengers.h"
#include <algorithm>
namespace SGP {

VectorForPassengers::VectorForPassengers(int size){
    passengers = new Passenger[size];
    _size = size;
}

int VectorForPassengers::getSize(){
    return _size;
}

void VectorForPassengers::setSize(int size){
    _size = size;
}

bool VectorForPassengers::isEmpty(int index){
    return (passengers[index].getAge()==0);
}

void VectorForPassengers::addPassenger() {
   for(int i=0; i<_size; i++){
        if(isEmpty(i)){
            Passenger added;
            std::cin >> added;
            passengers[i]=added;
            i = _size+1;
        }
   }

    if(isEmpty(_size-1) == false){
        Passenger* temporary = new Passenger[_size*2];
        for(int j=0; j<_size; j++){
            temporary[j]=passengers[j];
        }
        setSize(_size*2);
        passengers = new Passenger[_size];
        for(int j=0; j<_size; j++){
            passengers[j] = temporary[j];
        }
    }
}

void VectorForPassengers::removePassenger(int index) {
    passengers[index].setAge(0);
}

Passenger VectorForPassengers::getPassenger(int index) {
        return passengers[index];
    }

void VectorForPassengers::setPassenger(int index, Passenger passenger) {
        passengers[index] = passenger;
}

void VectorForPassengers::printAllPassengers() {
    for(int i=0; i<_size;i++){
        if(isEmpty(i) == false){
            std::cout << passengers[i] << '\n';
        }

    }
}

void VectorForPassengers::sortByAge(int direction) {
    Passenger swap;
    if(direction == 1){
        for(int j=0; j<20; j++){
            for(int i=0; i<_size-1; i++){
                if(passengers[i] > passengers[i+1]){
                    swap = passengers[i];
                    passengers[i] = passengers[i+1];
                    passengers[i+1] = swap;
                }
            }
        }
    }
    if(direction == 2){
        for(int j=0; j<20; j++){
            for(int i=0; i<_size-1; i++){
                if(passengers[i] < passengers[i+1]){
                    swap = passengers[i];
                    passengers[i] = passengers[i+1];
                    passengers[i+1] = swap;
                }
            }
        }
    }
}
}