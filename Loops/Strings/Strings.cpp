// Strings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void hello()
{
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int len;

	str3 = str1;
	cout << "str3: " << str3 << endl;

	str3 = str1 + str2;
	cout << "str1 + str2: " << str3 << endl;

	len = str3.size();
	cout << "str3.size(): " << len << endl;
}

void input()
{
	char str2[100];
	cout << "Enter 2nd string: ";
	cin.get(str2, 100);
	cout << "You entered: " << str2 << endl;
}

int main()
{
    cout << "Strings!" << endl;

	char str[] = "C++";

	char word[100];

	cout << "Enter a string: ";
	cin >> word;
	cout << "You entered: " << word << endl;

	cout << "Enter another string: ";
	cin >> word;
	cout << "You entered: " << word << endl;

	cout << "---------------" << endl;
	hello();
	char str2[100];
	cout << "Enter 2nd string: ";
	cin.get(str2, 100);
	cout << "You entered: " << str2 << endl;


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
