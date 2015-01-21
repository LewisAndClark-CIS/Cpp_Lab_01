//Program: Lab01_3.cpp
//Author: Luke Gosnell
//Date: 1/21/2015
//This program takes the base price of a car, adds extra fees, then tells the user the total.

// Lab01_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double number;
	double tax;
	double license;
	double dealerPrep;
	double destCharge;
	double totalCost;
	cout << "Enter the base price of a car: ";
	cin >> number;
	getchar();

	tax = number * .07;
	license = number * .10;
	dealerPrep = 200.0;
	destCharge = 100.00;
	totalCost = number + tax + license + dealerPrep + destCharge;

	cout << "----Extra Charges----" << endl;

	cout << "Tax: $" << tax << ".\n";

	cout << "License $: " << number*.10 << ".\n";


	cout << "Dealer Prep: $" << dealerPrep << ".\n";
	

	cout << "Destination Charge: $" << destCharge << ".\n";

	cout << "Total Cost: $" << totalCost << ".\n";
	getchar();
	return 0;
}

