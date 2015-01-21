//Program: Lab01_2.cpp
//Author: Luke Gosnell
//Date: 1/20/2015
//Contributers: Thomas Morrissey
//This program calculates the tip for 15% and 20% of a restuarant bill.

// Lab01_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number;
	cout << "Enter total bill: ";
	cin >> number;
	getchar();

	cout << "15 % tip: " << number*.15 << ".\n";

	cout << "20 % tip: " << number*.20 << ".\n";
	getchar();
	return 0;
}

