// Problem 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double Car = 0.0;
	float Tax = 3.5;
	int liscense = 200;
	int Prep = 150;
	double Destination = 0.0;
	float DestinationTax = 2.7;
	cout << "\t Welcome To My Car Sales Place" << endl;
	cout << "Please enter the value of a car worth more than 200 USD. ";
	cin >> Car;
	Tax = Car / 3.5;
	liscense = Car + liscense;
	Prep = Car + Prep;
	cout << "How far do you want to go with the car? (in miles) ";
	cin >> Destination;
	DestinationTax = Destination / DestinationTax;
	DestinationTax = Car / DestinationTax;
	Car = Car + Tax + liscense + Prep + DestinationTax;
	cout << "Your subtotal is $" << Car << ". Hope you enjoy it!";

	getchar();
	getchar();
	return 0;
}

