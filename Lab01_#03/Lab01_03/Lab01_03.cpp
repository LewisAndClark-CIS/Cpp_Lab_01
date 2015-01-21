// Lab01_03.cpp : This program works to find the total cost of a car.
//Program Name: Lab01_03
//Date Written: 1-20-2015
//Author: Thomas Morrissey

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	double BasePrice;
	int DealerPrep = 50;
	int Destination = 25;
	cout << "Enter Base Price for Car: ";
	cin >> BasePrice;
	getchar();
	double Tax = BasePrice*0.0725;
	double License = BasePrice*0.1725;
	double TotalPrice = BasePrice + Tax + License + DealerPrep + Destination;
	cout << "The total cost of this vechile: " << TotalPrice << ".\n";
	getchar();
	return 0;
}

