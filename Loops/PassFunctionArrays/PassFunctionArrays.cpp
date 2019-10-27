// PassFunctionArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void display(int m[4])
{
	cout << "Displaying marks: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "Student " << i + 1 << ": " << m[i] << endl;
	}
}

void display(int n[3][2])
{
	cout << "Displaying multi values: " << endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << n[i][j] << " " << endl;
		}
	}
}

int main()
{
    cout << "Passing Array to Function" << endl;
	int marks[4] = { 22, 56, 74, 89 };
	display(marks);

	int num[3][2] = {
		{3, 4},
		{5, 7},
		{9, 5},
	};
	display(num);

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
