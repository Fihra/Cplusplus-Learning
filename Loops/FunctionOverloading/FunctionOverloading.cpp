// FunctionOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void display(int var) {
	cout << "Integer number: " << var << endl;
}

void display(float var) {
	cout << "Float number: " << var << endl;
}

void display(int var1, float var2) {
	cout << "Integer number: " << var1;
	cout << " and float number: " << var2;
}

void show(char = '*', int = 1);

int main()
{
	cout << "Function Overloading" << endl; 

	int a = 5;
	float b = 5.5;

	display(a);
	display(b);
	display(a, b);
	cout << endl;
	cout << "---------------" << endl;
	cout << "Default Argument" << endl;

	cout << "No Argument passed" << endl;
	show();
	cout << "First Argument passed" << endl;
	show('#');

	cout << "Both Arguments passed" << endl;
	show('%', 3);
	return 0;
}

void show(char c, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << c;
	}

	cout << endl;
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
