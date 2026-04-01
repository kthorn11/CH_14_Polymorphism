// Employee Salary Combiner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class EmployeeSalary
{

private:
    double salary;

public:
    void setSalary(double amount)
    {
        salary = amount;


    }
    double getSalary()
    {
        return salary;
    }
    EmployeeSalary operator+(EmployeeSalary second_employee)
    {
        EmployeeSalary result_employee;
        result_employee.salary = salary + second_employee.salary;
        return result_employee;

    }

    bool operator>(EmployeeSalary second_employee)
    {
        if (salary > second_employee.salary)
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
    EmployeeSalary employee1;
    EmployeeSalary employee2;
    EmployeeSalary total_employee_salary;

    double salary1;
    double salary2;

    cout << "Enter salary of first employee: ";
    cin >> salary1;

    cout << "Enter salary of second employee: ";
    cin >> salary2;

    employee1.setSalary(salary1);
    employee2.setSalary(salary2);


    total_employee_salary = employee1 + employee2;

    cout << "Total salary: " << total_employee_salary.getSalary() << endl;
    




    if (employee1 > employee2)
    {
        cout << "First employee has higher salary." << endl;
    }
    else
    {
        cout << "Second employee has higher salary." << endl;
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
