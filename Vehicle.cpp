#include <iostream>
#include "Car.h"

Car::Car(int w, int d) : numWheels(w), numDoors(d) {
    std::cout << "\nIn constructor with 2 parameters" << std::endl;
}

Car::Car(int w) : Car(w, 4) {
    std::cout << "\nIn constructor with 1 parameter, wheels =" << w << std::endl;
}

Car::Car() : Car(4) {
    std::cout << "\nIn constructor with 0 parameters" << std::endl;
}

Car::Car(const Car& other) : numWheels(other.numWheels), numDoors(other.numDoors) {
    std::cout << "\nIn copy constructor" << std::endl;
}

Car::Car(Car* carPtr) : numWheels(carPtr->numWheels), numDoors(carPtr->numDoors) {
    std::cout << "\nIn constructor with 1 parameter of type Car*" << std::endl;
}

Car::~Car() {
    std::cout << "In destructor" << std::endl;
}

int Car::getNumWheels() const {
    return numWheels;
}

void Car::setNumWheels(int numWheels) {
    this->numWheels = numWheels;
}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

void Car::printVehicle() {
    std::cout << "Wheels: " << numWheels << std::endl;  
    std::cout << "Doors: " << numDoors << std::endl;
}
