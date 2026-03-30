// Box Storage Divider.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class StorageBox
{
private: 
	int item_count;


public: 


	void setItemCount(int count)
	{
		item_count = count;
	}
	int getItemCount()
	{
		return item_count;
	}
	StorageBox operator/(int divisor)
	{
		StorageBox result_box;

		if (divisor != 0)
		{
			result_box.item_count = item_count / divisor;
		}
		else
		{
			cout << "Error: Division by zero!" << endl;
			result_box.item_count = 0;
		}
		return result_box;
	}

};



int main()
{
	StorageBox Box1;
	StorageBox Box2;

	int count;
	int divisor;

	cout << "Enter number of Items: ";
	cin >> count;

	cout << "Enter divisor: ";
	cin >> divisor;

	Box1.setItemCount(count);


	Box2 = Box1 / divisor;


	cout << "Items after divison: " << Box2.getItemCount() << endl;

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
