// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double bill = 0.0;
	double tip = 0.15;
	double tip2 = 0.2;
	double tipTotal = 0.0;
	double tip2Total = 0.0;
	
	cout << "Enter the bill total: ";
	cin >> bill;
	cin.sync();

	tipTotal = bill * tip;
	tip2Total = bill * tip2;

	cout << "15% tip: " << (tipTotal) << endl;
	
	cout << "20% tip: " << (tip2Total) << endl;
	getchar();
	return 0;
}

