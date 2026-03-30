// Hospital Staff Role Display.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



class Staff
{
public:
    void showRole()
    {
        cout << "Staff works in the hospital." << endl;
    }
};

class Doctor : public Staff
{
    void showRole()
    {
        cout << "Doctor treats patients and gives perscriptions." << endl;
    }
};

class Nurse : public Staff
{
public:
    void showRole()
    {
        cout << "Nurse cares for patients and assists doctors." << endl;
    }
};
int main()
{
    
    Doctor doctor_object;
    Nurse nurse_object;

    doctor_object.showRole();
    nurse_object.showRole ();




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
