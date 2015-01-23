// Challenge 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double total=0.00;
	cout << "Enter total bill: ";
	cin >> total;
	getchar();
	cout << "15% tip: " << total*.15;
	cout << endl;
	cout << "20% tip: " << total*.20;
	getchar();
	return 0;
}

