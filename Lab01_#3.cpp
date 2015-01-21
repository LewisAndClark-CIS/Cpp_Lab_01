// ConsoleApplication9.cpp : Defines the entry point for the console application.
//
/**************************************
* Problem3.cpp                        *
* Author: Sam Coon                    *
* Date: 1/21/15                       *
**************************************/

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double total = 0.0;
	double car = 0.0;
	double tax = 0.0;
	double liscense = 0.0;
	int dealerPrep = 300;
	int locationCharge = 200;

	cout << "\tCar Salesman Program" << endl;
	cout << "Enter the price of the car you want: ";
	cin >> car;
	tax = .15 * car;
	liscense = .2 * car;
	total = car + tax + liscense + dealerPrep + locationCharge;
	cout << "The total of the car after all additional fees is $" << total << endl;

	getchar();
	getchar();
	return 0;
}

