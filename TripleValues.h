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
//		1.	TripleValues.cpp  -  driver program with main function
//*****************************************************************************************************


#ifndef TRIPLEVALUES_H
#define TRIPLEVALUES_H

template <typename T>
class TripleValues
{
	private:
		T val1;
		T val2;
		T val3;

	public:
		TripleValues();
		TripleValues(T, T, T);
		void setFirst(T);
		void setSecond(T);
		void setThird(T);
		void getAll(T&, T&, T&) const;
		T getMin() const;
		T calcSum();
};

//*****************************************************************************************************

template <typename T>
TripleValues<T> :: TripleValues()
{
	this->val1 = 0;
	this->val2 = 0;
	this->val3 = 0;
}

//*****************************************************************************************************

template <typename T>
TripleValues<T> ::TripleValues(T first, T second, T third)
{
	this->val1 = first;
	this->val2 = second;
	this->val3 = third;
}

//*****************************************************************************************************

template <typename T>
void TripleValues<T> :: setFirst(T first)
{
	this->val1 = first;
}

//*****************************************************************************************************

template <typename T>
void TripleValues<T> :: setSecond(T second)
{
	this->val2 = second;
}

//*****************************************************************************************************

template <typename T>
void TripleValues<T> :: setThird(T third)
{
	this->val3 = third;
}

//*****************************************************************************************************

template <typename T>
void TripleValues<T> :: getAll(T& firstVal, T& secondVal, T& thirdVal)const
{
	firstVal = this->val1;
	secondVal = this->val2;
	thirdVal = this->val3;

}

//*****************************************************************************************************

template <typename T>
T TripleValues<T> :: getMin()const
{
	T min = this->val1;
	if (this->val2 < this->val1)
		min = this->val2;
	else if (this->val3 < this->val1)
		min = this->val3;

	return min;
}

//*****************************************************************************************************

template <typename T>
T TripleValues<T> :: calcSum()
{
	T sum = this->val1 + this->val2 + this->val3;

	return sum;
}

//*****************************************************************************************************

#endif

