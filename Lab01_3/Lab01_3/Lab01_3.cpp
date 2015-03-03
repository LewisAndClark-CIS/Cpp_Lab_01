// Lab01_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main(){
	double basePrice = 0.0;
	double tax = 0.0;
	double license = 0.0;
	double dealerPrep = 0.0;
	double destinationCharge = 0.0;
	double totalCharge = 0.0;
	string strTotalCharge = "";
	cout << "Enter the price of your new car:";
	cin >> basePrice;
	tax = basePrice*0.07;
	license = basePrice*0.1;
	dealerPrep = 200;
	destinationCharge = 300;
	totalCharge = basePrice + tax + license + dealerPrep + destinationCharge;
	strTotalCharge = totalCharge;
	cout << "Your total cost is $" << totalCharge << "." << endl;


	getchar();
	return 0;

}

