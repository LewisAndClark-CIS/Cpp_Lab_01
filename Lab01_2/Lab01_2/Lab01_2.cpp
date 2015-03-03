// lab01_2.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const double FIFTEEN = 0.15, TWENTY = 0.20;
	double initial = 0.0, tip15 = 0.0, tip20 = 0.0;

	cout << "Enter the total cost: $ ";
	cin >> initial;
	cin.sync();
	tip15 = FIFTEEN * initial;
	tip20 = TWENTY * initial;
	cout << endl;
	cout << "    15% Tip: $" << tip15 << endl;
	cout << "    20% Tip: $" << tip20 << endl;
	cout << endl;
	cout << endl;
	getchar();
	return 0;
}