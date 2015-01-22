// Lab01_3.cpp : Defines the entry point for the console application.
//
/*
*****************************
* Brad						*
* 1/21/15					*
* Lab01_3					*
*****************************
*/
#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(){
	//Initialize Variables
	double carPrice = 0.0, newCarPrice = 0.0;
	double dealerPrep = 75.0, destonationCharge = 30.0;
	double taxRate = 0.15, tax = 0.0, licenseRate = .08, license = 0.0;
	//Inital price of car
	cout << "Please enter the cost of the car: ";
	cin >> carPrice;
	cin.sync();
	//Percentage additions
	tax = taxRate * carPrice;
	license = licenseRate * carPrice;
	//New car price
	newCarPrice = carPrice + dealerPrep + destonationCharge + tax + license;
	//Print new car price
	cout << "Price of car after fees: $" << newCarPrice;
	//Pause
	getchar();
	return 0;
}

