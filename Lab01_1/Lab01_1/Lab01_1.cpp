// Lab01_1.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(){

	//Initializing and declaring variables
	const double FIFTEEN = 0.15, TWENTY = 0.20;
	double initial = 0.0, tip15 = 0.0, tip20 = 0.0;
	//Getting inital bill
	cout << "Enter the total bill amount: ";
	cin >> initial;
	cin.sync();
	//Calculating
	tip15 = FIFTEEN * initial;
	tip20 = TWENTY * initial;
	//Printing
	cout << "15 Percent tip: " << tip15 << "$" << endl;
	cout << "20 Percent tip: " << tip20 << "$" << endl;
	getchar();
	return 0;
}



