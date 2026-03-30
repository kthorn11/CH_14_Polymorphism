// Smart Restaurant Bill Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BillCalculator
{
public:
	int calculateBill(int burger_price, int pizza_price)
	{
		return burger_price + pizza_price;
	}
	double calculateBill(double food_total, double tax_rate)
	{
		return food_total + (food_total * tax_rate);
	}

	double calculateBill(double food_total, double tax_rate, double discount)
	{
		return (food_total +  (food_total * tax_rate)) - discount;
	}
};



int main()
{

	BillCalculator calculator_object;

	int burger_price;
	int pizza_price;
	double tax_rate;
	double discount;

	cout << "Enter burger price: ";
	cin >> burger_price;

	cout << "Enetr pizza price: ";
	cin >> pizza_price;

	cout << "Enter tax rate: ";
	cin >> tax_rate;

	cout << "Enter discount: ";
	cin >> discount;


	int food_total = calculator_object.calculateBill(burger_price, pizza_price);
	double total_with_tax = calculator_object.calculateBill((double)food_total, tax_rate);
	double total_after_tax_and_discount = calculator_object.calculateBill((double)food_total, tax_rate, discount);

	


	cout << "Food Total: " << food_total << endl;
	cout << "Total With Tax: " << total_with_tax << endl;
	cout << "Total After Tax and Discount: " << total_after_tax_and_discount;



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
