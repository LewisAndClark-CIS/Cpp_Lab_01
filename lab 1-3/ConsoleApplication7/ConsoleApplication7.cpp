// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
double car = 0.0;
double carTax = 0.0;
double licens = 200.00;
double dealerPrep = 0.0;
double destinationCharge = 500.00;
double carTotal = 0.0;

int main()
{
	cout << "What is the price of the car ";
	cin >> car;
	carTax = car * .15;
	dealerPrep = car * .10;
	cout << "your car tax is " << carTax << endl;
	cout << "your licens cost " << licens << endl;
	cout << "the dealerPrep cost " << dealerPrep << endl;
	cout << "the destination charge is " << destinationCharge << endl;
	carTotal = car + carTax + licens + dealerPrep + destinationCharge;
	cout << "this is your car total " << carTotal << endl;
	cin.ignore();
	cin.ignore();
	return 0;
}

