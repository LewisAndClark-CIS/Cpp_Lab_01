/*****************
* Lab01_3.cpp    *
* By: Zach Golik *
* Date: 1/20/15  *
*****************/

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	float basePrice; // Price of the car orginaly //
	float dealerPrep = 200; // The dealer prep //
	float destCharge = 500; // The destination charge //
	cout << "Enter the base price of the car: ";
	cin >> basePrice; // Users input //
	float tax = basePrice * .75; // Tax //
	float license = basePrice * .25; // License //
	float newPrice = basePrice + tax + license + dealerPrep + destCharge; // New price of the car //
	cout << "The actual price of the car is: " << newPrice << "." << endl;
	system("pause");
	return 0;
}