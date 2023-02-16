#include <iostream>
#include "Car.h"

void CreateCar(Car& v, int w = 4, int d = 2) {
	v.setNumWheels(w);
	v.setNumDoors(d);
}

int main(int argc, char** argv)
{
	Car original;
	Car copy(original);
	Car secondCopy(&original);
	copy.printVehicle();
	CreateCar(copy, 2);
	copy.printVehicle();
	CreateCar(copy, 2, 3);
	copy.printVehicle();
	copy = secondCopy;
	copy.printVehicle();

	return 0;
}


