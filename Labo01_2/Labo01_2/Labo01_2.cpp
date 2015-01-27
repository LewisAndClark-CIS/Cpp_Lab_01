// Lab 1.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	double total = 0;
	double tip1 = 0.15;
	double tip2 = 0.2;

	cout << "Enter your bill total: ";
	cin >> total;
	cin.sync();

	cout << "A 15% tip would be " << (tip1 * total) << endl;

	cout << "A 20% tip would be " << (tip2 * total) << endl;

	getchar();

	return 0;
}

