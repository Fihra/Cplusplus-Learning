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

Person getData(Person);
void displayData(Person);

int main()
{
    cout << "Structs" << endl;

	Person p;
	p = getData(p);


	displayData(p);
	return 0;
}

Person getData(Person p)
{
	cout << "Enter full name: ";
	cin.get(p.name, 50);
	cout << "Enter age: ";
	cin >> p.age;
	cout << "Enter salary: ";
	cin >> p.salary;
	return p;
}

void displayData(Person p)
{
	cout << endl << "Displaying Information. " << endl;
	cout << "Name: " << p.name << endl;
	cout << "Age: " << p.age << endl;
	cout << "Salary: " << p.salary;
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
