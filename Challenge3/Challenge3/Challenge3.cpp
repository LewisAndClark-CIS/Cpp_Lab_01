// Challenge3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double base = 0.00;
	double tax = 1.08;
	double license = 1.05;
	double dealerPrep = 500.00;
	double destCharge = 250.00;
	double total = 0.00;
	cout << "Base price of vehicle: ";
	cin >> base;
	getchar();
	total = base*tax;
	total = total*license;
	total = total + dealerPrep;
	total = total + destCharge;
	cout << "Total Price: " << total;
	getchar();
	return 0;

}

