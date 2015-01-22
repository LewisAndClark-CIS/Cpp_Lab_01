// Lab01_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Initialize variables
	double tipFifteen = 0.15;
	double tipTwenty = 0.20;
	double initial = 0.0, tip20 = 0.0, tip15 = 0.0;

	cout << "Enter the total bill amount: ";
	cin >> initial;
	cin.sync();

	tip15 = initial * tipFifteen;
	tip20 = initial * tipTwenty;

	cout << "15% tip: $" << tip15 << endl;
	cout << "20% tip: $" << tip20;
	getchar();

	return 0;
}