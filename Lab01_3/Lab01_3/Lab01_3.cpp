// Lab1.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double CarPrice = 0;
	double tax = 0.15 * CarPrice;
	double license = 0.05 * CarPrice;
	double dealerprep = 300;
	double destinationcharge = 100;

	cout << "Enter the base price of your car. ";
	cin >> CarPrice;
	cin.sync();

	double FinalPrice = CarPrice + tax + license + dealerprep + destinationcharge;

	cout << "The base price of your car is " << CarPrice << "." << endl;
	cout << "The total amount of your car is " << FinalPrice << endl;

	getchar();

	return 0;
}

