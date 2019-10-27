// StringsTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void display(char s[])
{
	cout << "Entered char array is: " << s << endl;
}

void display(string s)
{
	cout << "Entered string is: " << s << endl;
}

int main()
{
	/*cout << "Strings 2" << endl; 
	string str;
	cout << "Enter a string: " << endl;
	getline(cin, str);

	cout << "You entered: " << str << endl;*/
	string str1;
	char str[100];

	cout << "Enter a string: ";
	getline(cin, str1);

	cout << "Enter a second string: ";
	cin.get(str, 100, '\n');

	display(str1);
	display(str);


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
