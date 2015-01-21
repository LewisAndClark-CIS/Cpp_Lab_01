// ConsoleApplication8.cpp : Defines the entry point for the console application.
//
/*****************************************************
* Problem2.cpp                                       *
* Author: Sam Coon                                   *
* Date: 1/20/15                                      *
*****************************************************/
#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double bill = 0.0;
	double tip = 0.0;
	float percent = .15;

	cout << "\tWelcome to tip calculator!" << endl;
	cout << "Enter the cost of the bill: ";
	cin >> bill;
	tip = bill*percent;
	cout << "Your tip should be $" << tip << endl;

	getchar();
	getchar();
	return 0;
}

