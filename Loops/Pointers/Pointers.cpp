// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "Pointers!" << endl; 
	int var1 = 3;
	int var2 = 24;
	int var3 = 17;

	//& (reference) operator points to reference memory data
	//cout << &var1 << endl;
	//cout << &var2 << endl;
	//cout << &var3 << endl;

	//Pointers variables are variables that points to a specific address in the memory pointed by another variable
	int *p; // or int* p;

	//* is a dereference operator which means pointer to
	//cout << *p << endl;

	//& gives the address of the variable
	//* is to get the value stored in the memory address

	int *pc, c;

	c = 5;
	cout << "Line #32- Address of c (&c): " << &c << endl;
	cout << "Value of c (c): " << c << endl << endl;

	pc = &c;
	cout << "Line #36 Address that pointer pc holds (pc): " << pc << endl;
	cout << "Content of the address pointer pc holds (*pc): " << *pc << endl << endl;

	c = 11;
	cout << "Line #40 -Address pointer pc holds (pc): " << pc << endl;
	cout << "Count of the address pointer pc holds (*pc): " << *pc << endl << endl;

	*pc = 2;
	cout << "Line #40- Address of c (&c): " << &c << endl;
	cout << "Value of c (c): " << c << endl << endl;

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
