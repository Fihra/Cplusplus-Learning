// PointersAndArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void pointerExThree()
{
	float arr[5];
	cout << endl << "Pointer Ex Three" << endl;
	cout << "Enter 5 numbers: ";
	for (int i = 0; i < 5; ++i)
	{
		cin >> *(arr + i);
		cout << endl << *(arr + 1) << endl;
	}

	cout << "Displaying Data: " << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << *(arr + i) << endl;
	}
}

void pointerExTwo()
{
	float arr[5];

	cout << "PointerExTwo Displaying address using pointers notation: " << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << arr + i << endl;
	}
}

int main()
{
	cout << "Pointers & Arrays" << endl;

	float arr[5];
	float *ptr;

	cout << "Displaying address using arrays: " << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << "&arr[" << i << "] = " << &arr[i] << endl;
	}

	// ptr = &arr[0]
	ptr = arr;

	cout << endl << "Displaying address using pointers: " << endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << "ptr + " << i << " = " << ptr + i << endl;
	}


	pointerExTwo();
	pointerExThree();

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
