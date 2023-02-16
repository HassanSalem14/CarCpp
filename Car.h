#pragma once

	class Car {
		int numWheels;
		int numDoors;

	public:
		Car(int w, int d);
		Car(int w);
		Car();
		Car(const Car& other);
		Car(Car* carPtr);
		~Car();

		int getNumWheels() const;
		void setNumWheels(int numWheels);
		int getNumDoors() const;
		void setNumDoors(int numDoors);
		void printVehicle();
	};
