// Enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
enum season { spring = 0, summer = 4, autumn = 8, winter = 12 };
enum designFlags {
	ITALICS = 1,
	BOLD = 2,
	UNDERLINE = 4
};	

void showSeason()
{
	season timely;
	timely = summer;
	cout << endl << "Season: " << timely;
}

void display() 
{
	week today;
	today = Wednesday;
	cout << endl << "Day " << today + 1;
}

void chooseFlag()
{
	int myDesign = BOLD | UNDERLINE;
	cout << endl << myDesign;
}

int main()
{
	cout << "Enumeration" << endl;
	display();
	showSeason();
	chooseFlag();

	return 0;
}

