//*****************************************************************************************************
//  File:           Bigger.cpp
//
//  Student:        William Gibbs
//
//  Assignment:     Assignment 1 Part 1
//
//  Course Name:    Data Structures I
//
//  Course Number:  COSC 3050 - 10
//
//  Due:            August 31, 2020
//
//  
//  This program takes user entry and determines which of the two are larger.  It has the capability
//  to compare two ints, two doubles, two characters, or two c-strings(character arrays).
//*****************************************************************************************************

#include <iostream>
#include <typeinfo>
#include <cstring>

//*****************************************************************************************************

template <typename T>
T* findBigger(T*, T*);

template <typename T>
T findBigger(T, T);

template <typename T>
T displayBigger(T, T, T);

template <typename T>
void getData(T &, T &);

//*****************************************************************************************************

using namespace std;

int main()
{

    int aInt = 0, bInt = 0, maxInt;
    double aDouble = 0.0, bDouble = 0.0, maxDouble;
    char aChar = 'x', bChar = 'y', maxChar;
    char* aArray = new char[81], * bArray = new char[81], *maxArray;


//*****************************************************************************************************

    getData (aInt, bInt);
    maxInt = findBigger(aInt, bInt);
    displayBigger(aInt, bInt, maxInt);

    getData (aDouble, bDouble);
    maxDouble = findBigger(aDouble, bDouble);
    displayBigger(aDouble, bDouble, maxDouble);

    getData (aChar, bChar);
    maxChar = findBigger(aChar, bChar);
    displayBigger(aChar, bChar, maxChar);

    getData (aArray, bArray);
    maxArray = new char[100]; 
    maxArray = findBigger(aArray, bArray);
    displayBigger(aArray, bArray, maxArray);

    return 0;
}

//*****************************************************************************************************

template <typename T> 
void getData ( T &a, T &b )
    {
        string varType = typeid(a).name();
        cout << "Please enter the first set of values of '" << varType << "' type:" << endl;
        cout << "Please enter the first value:  ";
        cin >>  a;
        cin.ignore(1000, '\n');
        cout << "Please enter the second value:  ";
        cin >>  b;
        cin.ignore(1000, '\n');

    }

//*****************************************************************************************************

template <typename T> 
T* findBigger(T *a, T *b)
{
    T* bigger;

        if (strcmp(a, b) >=0)
            bigger = a;
        else
            bigger = b;

    return bigger;
}

//*****************************************************************************************************

template <typename T>
T findBigger(T a, T b)
{
    T bigger;

    if (a >= b)
        bigger = a;
    else
        bigger = b;

    return bigger;
}

//*****************************************************************************************************

template <typename T>
T displayBigger(T valA, T valB, T valMax)
{
    cout << "The first " << typeid(valA).name() << " value you entered was: " << valA << ".\n";
    cout << "The second " << typeid(valA).name() << " value you entered was: " << valB << ".\n";
    cout << "The bigger value is: " << valMax << ".\n";

    return valMax;
}

//*****************************************************************************************************

/*
Please enter the first set of values of 'int' type:
Please enter the first value:  75
Please enter the second value:  6
The first int value you entered was: 75.
The second int value you entered was: 6.
The bigger value is: 75.
Please enter the first set of values of 'double' type:
Please enter the first value:  89.35
Please enter the second value:  123.4
The first double value you entered was: 89.35.
The second double value you entered was: 123.4.
The bigger value is: 123.4.
Please enter the first set of values of 'char' type:
Please enter the first value:  z
Please enter the second value:  a
The first char value you entered was: z.
The second char value you entered was: a.
The bigger value is: z.
Please enter the first set of values of 'char *' type:
Please enter the first value:  applepie
Please enter the second value:  peachpie
The first char * value you entered was: applepie.
The second char * value you entered was: peachpie.
The bigger value is: peachpie.

C:\Users\willg\source\repos\Bigger.cpp\Debug\Bigger.cpp.exe (process 19612) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .
*/