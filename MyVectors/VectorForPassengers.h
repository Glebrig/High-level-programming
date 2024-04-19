#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "C:\Users\Глеб\Desktop\HLP\Models\User\Passenger.h"

namespace SGP {
class VectorForPassengers {
private:
Passenger* passengers;
public:
int _size;
VectorForPassengers(int size);

int getSize();
void setSize(int size);

void printAllPassengers();
void addPassenger();
void removePassenger(int index);
Passenger getPassenger(int index);
void setPassenger(int index, Passenger passenger);
void sortByAge(int direction);
bool isEmpty(int index);
};
}