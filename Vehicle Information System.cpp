// Vehicle Information System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



class Vehicle
{

public:
	void showVehicle()
	{
		cout << "Vehicle is used for transportation" << endl;
	}


};

class car : public Vehicle
{

public: void showType()
{
	cout << "Car is a four wheeler vehicle." << endl;
}
};

class  Bike : public Vehicle
{
public:
	void showType()
	{
		cout << "Bike is a two-wheeler vehicle." << endl;
	}
};

int main()
{
	car car_object;
	Bike bike_object;
	Vehicle* vehicle_object;

	car_object.showType();
	bike_object.showType();

	vehicle_object = &car_object;
	vehicle_object->showVehicle();
   




	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
