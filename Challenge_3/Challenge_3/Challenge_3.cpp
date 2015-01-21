// Challenge_3.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int first = 0;
	int tax = 5;
	int license = 5;
	int dealer = 5;
	int destination = 5;
	cout << "What is the base car price? ";
	cin >> first;
	cout << "The tax of the car is: " << first*tax << endl;
	cout << "The license price of the car is: " << first*license << endl;
	cout << "The dealer prep of the car is: " << first*dealer << endl;
	cout << "The destination charge of the car is: " << first*destination << endl;
	cout << "The tax of the car is: " << first*tax << endl;
	cout << "The endprice of the car is: " << first + tax + license + dealer + destination << endl;
	return 0;
	getchar();

}
