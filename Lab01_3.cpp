/*******************
* Program: Lab01_3 *
* Date: 1/21/2015  *
* Author: Bo Meers *
********************/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	double basePrice;
	double totalPrice;
	double percent;

	cout << "What is the base price of the car? " << endl;
	cin >> basePrice;
	cin.sync();
	cout << endl << "Adding tax, license, dealer prep, and destination fees... " << endl;
	percent = basePrice * .20;
	totalPrice = (((basePrice + percent) + 33.00) + 100.00) + 400.00;
	cout << endl << "Your total price will be " << totalPrice << endl << endl << endl;
	cout << "Press <Enter> to exit. ";
	getchar();
	return 0;
}