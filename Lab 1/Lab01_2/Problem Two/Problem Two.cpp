// Problem Two.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double Cost = 0.0;
	float tax1 = 15;
	float tax2 = 20;
	cout << "\t Welcome to Tip Calculator!" << endl;
	cout << "Enter your costs here (in USD)! ";
	cin >> Cost;
	tax1 = Cost / tax1;
	tax2 = Cost / tax2;
	cout << "Your subtotal with 15% tax is " << tax1 << endl;
	cout << "Your subtotal with 20% tax is " << tax2 << endl;

	getchar();
	getchar();
	return 0;
}

