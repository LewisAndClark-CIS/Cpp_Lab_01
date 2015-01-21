// Lab01_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	double cost, tax;
	double tax15, tax20;
	cout << "Enter in your bill:";
	cin >> cost;
	tax = cost*1.15;
	tax15 = tax;
	tax = cost*1.20;
	tax20 = tax;
	cout << "A 15% tip is $" << tax15 << endl;
	cout << "A 20% tax is $" << tax20 << endl;
	getchar();
	return 0;
}

