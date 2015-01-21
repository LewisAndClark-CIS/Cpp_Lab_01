// Lab01_3.cpp : Defines the entry point for the console application.
//
#Contributions: Tom
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double base = 0;
	int dealershipCharge = 50;
	int destinationCharge = 50;
	cout << "Enter base price for car: ";
	cin >> base;
	getchar();
	double tax = base*.15;
	double License = base*.15;
	double Total = base + dealershipCharge + destinationCharge + tax + License;
	cout << "The total price of the car is " << Total << "." << endl;
	getchar();

	
	return 0;
}

