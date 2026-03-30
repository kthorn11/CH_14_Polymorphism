// Student Result Analyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class ResultAnalyzer
{

public: 
	int calculateResult(int mark1, int mark2)
	{
		return mark1 + mark2;
	}
	int calculateResult(int mark1, int mark2, int mark3)
	{
		return mark1 + mark2 + mark3;
	}
	double calculateResult(double total_marks, int subjects)
	{
		return total_marks / subjects;
	}



};





int main()
{
	ResultAnalyzer analyzer_object;

	int mark1;
	int mark2;
	int mark3;

	cout << "Enter mark 1: ";
	cin >> mark1;

	cout << "Enter mark 2: ";
	cin >> mark2;

	cout << "Enter mark 3: ";
	cin >> mark3;

	int total_two = analyzer_object.calculateResult(mark1, mark2);
	int total_three = analyzer_object.calculateResult(mark1, mark2, mark3);
	double average = analyzer_object.calculateResult((double)total_three, 3);

	cout << "Total of 2 subjects: " << total_two << endl;
	cout << "Totral of 3 subjects: " << total_three << endl;
	cout << "Average Marks: " << average << endl;





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
