// Bank Balance Comparison.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class BankAccount
{
private:  double balance;



public:

	void setBalance(double amount)
	{
		balance = amount;

	}
	bool operator==(BankAccount second_account)
	{
		if (balance == second_account.balance)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	


};





int main()
{

	BankAccount account1;
	BankAccount account2;


	double balance1;
	double balance2;


	cout << "Enter balance of account 1: ";
	cin >> balance1;

	cout << "Enter balance of account 2: ";
	cin >> balance2;

	account1.setBalance(balance1);
	account2.setBalance(balance2);

	if (account1 == account2)
	{
		cout << "Both accounts have the same balance." << endl;
	}
	else
	{
		cout << "Both account balances are different." << endl;
	}
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
