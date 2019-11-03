// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Person
{
	public:
		string profession;
		int age;

		Person(): profession("unemployed"), age(16){ }
		void display()
		{
			cout << "My profession is: " << profession << endl;
			cout << "My age is: " << age << endl;
			walk();
			talk();
		}
		void walk() { cout << "I can walk." << endl; }
		void talk() { cout << "I can talk." << endl; }

};

class MathTeacher : public Person
{
	public:
		void teachMaths() { cout << "I can teach Maths." << endl; }
};

class Footballer : public Person
{
	public:
		void playFootball() { cout << "I can play Football." << endl; }
};

int main()
{
    cout << "Inheritance" << endl;

	MathTeacher teacher;
	teacher.profession = "Teacher";
	teacher.age = 23;
	teacher.display();
	teacher.teachMaths();

	Footballer footballer;
	footballer.profession = "Footballer";
	footballer.age = 19;
	footballer.display();
	footballer.playFootball();

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
