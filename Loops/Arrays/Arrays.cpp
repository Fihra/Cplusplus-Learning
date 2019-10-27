// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void multiArray()
{
	int test[3][2] =
	{
		{2, -5},
		{4, 0},
		{9, 1}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
		}
	}
}

void multiArrayTwo()
{
	const int CITY = 2, WEEK = 7;

	int temperature[CITY][WEEK];
	cout << "Enter Temperature for a week of first city and then second city. " << endl;

	for (int i = 0; i < CITY; ++i)
	{
		for (int j = 0; j < WEEK; ++j)
		{
			cout << "City " << i + 1 << ", Day " << j + 1 << " : ";
			cin >> temperature[i][j];
		}
	}

	cout << endl << endl << "Displaying Values: " << endl;

	for (int i = 0; i < CITY; ++i)
	{
		for (int j = 0; j < WEEK; ++j)
		{
			cout << "City " << i + 1 << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
		}
	}
}

int main()
{
	cout << "Arrays!" << endl;

	int numbers[5], sum = 0;
	cout << "Enter 5 numbers: ";

	for (int i = 0; i < 5; i++)
	{
		cin >> numbers[i];
		sum += numbers[i];
	}

	cout << "Sum = " << sum << endl;
	multiArray();
	multiArrayTwo();

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
