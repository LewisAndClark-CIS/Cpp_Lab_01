// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
	float mynumber;
	float basePrice;
	cout << "What is the base price of the car? ";
	cin >> basePrice;
	float tax = .50 * basePrice;
	float license = .30 * basePrice;
	float dealerPrep = 70.00;
	float destinationCharge = 40.00;
	float totalPrice = tax + license + dealerPrep + destinationCharge + basePrice;
	cout << "Your total price for the car comes out to: " << totalPrice << " dollars.";
	getchar();
	cin.get();
	return 0;
}
