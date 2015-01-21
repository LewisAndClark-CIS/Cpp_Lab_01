// Lab01_3.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*******************
* adds fees to a car
* payment for a car
* salesman
******************/
#include <iostream>
using namespace std;

int main()
{
	double basePrice = 0;
	cout << "Car base price: ";
	cin >> basePrice;
	cin.sync();
	basePrice += basePrice * .15; //taxes
	basePrice += basePrice * .10; //license
	basePrice += 200; //dealer prep
	basePrice += 100; //destination charge
	cout << "Total price: " << basePrice << endl
		<< "press enter to exit";
	getchar();
}
