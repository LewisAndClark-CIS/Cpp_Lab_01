// lab01_3.cpp
// Jason Nguyen
// 1/21/15

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double base_price;
	double tax;
	double license;
	double dealer_prep = 15;
	double des_charge = 190;
	double actual_price;
	cout << "Enter base price of car: ";
	cin >> base_price;
	tax = base_price * .1;
	cout << "Tax: " << tax << endl;
	license = base_price * .2;
	cout << "License: " << license << endl;
	cout << "Dealer prep: " << dealer_prep << endl;
	cout << "Destination charge: " << des_charge << endl;
	actual_price = base_price + tax + license + dealer_prep + des_charge;
	cout << "\n\nAfter fees price: " << actual_price;
	getchar();
	return 0;
}

