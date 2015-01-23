// challenge3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main(){

	double car = 0.0;
	double tax = 0.0;
	double license = 0.0;
	int prep = 50;
	int charge = 80;
	double total = 0.0;

	cout << "What does the vehicle cost? ";
	cin >> car;
	getchar();

	tax = car* .54;
	license = car* .34;
	total = car + tax + license + prep + charge;
	cout << "Your total is: $" << total << endl;

	getchar();
	return 0;
}

