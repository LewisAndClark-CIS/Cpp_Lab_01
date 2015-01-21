// Lab01_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double totalBill = 0;
	double tip15 = 0;
	double tip20 = 0;


	cout << "Enter your total: ";
	cin >> totalBill;
	tip15 = totalBill * 0.15;
	tip20 = totalBill * 0.20;
	cout << "15% Tip: " << tip15 << endl;
	cout << "20% Tip: " << tip20 << endl;
	cin.ignore();
	cout << "<Press Enter>";
	cin.ignore();
	return 0;
}

