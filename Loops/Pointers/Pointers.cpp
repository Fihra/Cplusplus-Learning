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

/*

		Common Mistakes

		int c, *pc;
		pc=c;   Wrong! pc is address whereas, c is not an address. 
		*pc = &c;  Wrong! *pc is the value pointed by address whereas, %amp;c is an address. 
		pc = &c;  Correct! pc is an address and, %amp;pc is also an address. 
		*pc = c;  Correct! *pc is the value pointed by address and, c is also a value. 

*/
