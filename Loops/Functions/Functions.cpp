// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

//function prototype declaration
//only create a function prototype declaration
//if you create a function after main
//int add(int, int);

//function definition
int add(int a, int b)
{
	int add;
	add = a + b;
	return add;
}

void prime()
{
	int num, flag = 0;
	cout << "Enter a positive integer enter to check: ";
	cin >> num;

	for (int i = 2; i <= num / 2; i++)
	{
		if (num % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
	{
		cout << num << " is not a prime number.";
	}
	else
	{
		cout << num << " is a prime number.";
	}
}


int main()
{
	cout << "Functions!" << endl;

	int num1, num2, sum;

	cout << "Enter two numbers to add: ";
	cin >> num1 >> num2;

	sum = add(num1, num2);
	cout << "Sum = " << sum;

	prime();
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
