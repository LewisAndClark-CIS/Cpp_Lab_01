/****************
* Cpp_Lab_01    *
* Lab01_03      *
*****************
* Have user enter base price *
* Then using basePrice,      *
* calculate tax & licensing  *
* Set dealer prep and dest.  *
* to a set amount.           *
* Add all amounts up, set to *
* totalPrice, print result  */

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	float basePrice = 0.0;
	cout << "Enter the base price: ";
	cin >> basePrice;
	cout << endl;
	float tax = 0.0;
	tax = (basePrice * .15);
	float license = 0.0;
	license = (basePrice * 0.075);
	float dealerPrep = 100.50;
	float destination = 200.65;
	float totalPrice = (basePrice + tax + license + dealerPrep + destination);
	cout << "Ending total: $$" << totalPrice << endl;
	cin.ignore();
	cin.ignore();
	return 0;
}

