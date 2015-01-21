// Lab01_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double basePrice = 0;
	double tax = 0.07453;
	double licenseFee = 150;
	double dealerPrep = 50;
	double destinationCharge = 100;
	double totalPrice = 0;

	cout << "Base Price: ";
	cin >> basePrice;

	totalPrice = basePrice + (tax * basePrice) + licenseFee + dealerPrep + destinationCharge;
	cout << "Total Cost: " << totalPrice << endl;
	cin.ignore();
	cout << "<Press Enter>";
	cin.ignore();

	return 0;
}
