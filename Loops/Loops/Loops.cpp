// Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Loops" << endl;

	int number, i = 1, factorial = 1;
	cout << "While Loop" << endl;
	cout << "Enter a positive number: ";
	cin >> number;

	while (i <= number) {
		factorial *= i;
		i++;
	}

	cout << "Factorial of " << number << " = " << factorial << endl;

	cout << "---------------------------" << endl;

	cout << "Do While Loop" << endl;

	float num, sum = 0.0;

	do {
		cout << "Enter a number: ";
		cin >> num;
		sum += num;
	} while (num != 0.0);

	cout << "Total sum = " << sum;

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
