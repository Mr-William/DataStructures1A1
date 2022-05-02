//*****************************************************************************************************
//  File:           TripleValues.cpp
//
//  Student:        William Gibbs
//
//  Assignment:     Assignment 1 Part 2
//
//  Course Name:    Data Structures I
//
//  Course Number:  COSC 3050 - 10
//
//  Due:            August 31, 2020
//
//  
//  This program defines class templates that are used to create a class that holds three member
//	variables.  User is then instructed to enter three new variables. 
//	The program calculates and displays the min, and the sum.
//
//	Other files required:
//		1.	TripleValues.h  -  definition of the TripleValues class
//*****************************************************************************************************

#include "TripleValues.h"
#include <iostream>

template <typename T>
void display(TripleValues <T>& myVals);

using namespace std;

int main()
{
	TripleValues<int> obj1;
	display(obj1);
	TripleValues<double> obj2(5.4, 4.3, 9.6);
	display(obj2);
	TripleValues<char> obj3('a', 'b', 'c');
	display(obj3);

	return 0;
}

//*****************************************************************************************************

template <typename T>
void display(TripleValues <T>& myVals)
{
	string valType = typeid(T).name();
	T first, second, third, min, sum;
	myVals.getAll(first, second, third);

	cout << "Initially, the three values are initialized as: " << first << " " << second << " "
		 << third << " \n";
	cout << "Now please enter three " << valType << "s: ";

	cin >> first >> second >> third;

	myVals.setFirst(first);
	myVals.setSecond(second);
	myVals.setThird(third);

	myVals.getAll(first, second, third);

	cout << "After modification, the three new values are: " << first << " " << second << " "
		 << third << "\n";

	sum = myVals.calcSum();

	cout << "The sum is: " << sum << endl;

	min = myVals.getMin();

	cout << "The min is: " << min << endl;
}

//*****************************************************************************************************

/*
Initially, the three values are initialized as: 0 0 0
Now please enter three ints: 5 7 3
After modification, the three new values are: 5 7 3
The sum is: 15
The min is: 3
Initially, the three values are initialized as: 5.4 4.3 9.6
Now please enter three doubles: 2.73 3.14 5.62
After modification, the three new values are: 2.73 3.14 5.62
The sum is: 11.49
The min is: 2.73
Initially, the three values are initialized as: a b c
Now please enter three chars: x y a
After modification, the three new values are: x y a
The sum is: R
The min is: a

D:\OneDrive\Desktop\Webster\FA2020\DataStructures\DataStructures I\Week1\TripleValues\Debug\TripleValues.exe (process 25268) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/