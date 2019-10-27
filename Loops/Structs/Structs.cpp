// Structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct Person
{
	char name[50];
	int age;
	float salary;
};

int main()
{
    cout << "Structs" << endl;

	Person p1;
	cout << "Enter full name: ";
	cin.get(p1.name, 50);
	cout << "Enter age: ";
	cin >> p1.age;
	cout << "Enter salary: ";
	cin >> p1.salary;

	cout << endl << "Displaying Information. " << endl;
	cout << "Name: " << p1.name << endl;
	cout << "Age: " << p1.age << endl;
	cout << "Salary: " << p1.salary;

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
