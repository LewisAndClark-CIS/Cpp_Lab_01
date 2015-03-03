// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string> 
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//Brad helped with this part 
	double carPrice = 0.0, tax = 0.1, lisc = 0.05;
	double dealPrep = 50.0, destFee = 45.0, feeTotal = 0.0;
	double taxTotal = 0.0, liscTotal = 0.0, Total = 0.0;
	// to make it more organized :)
	
	cout << "Enter in your base car price: ";
	cin >> carPrice;
	cin.sync();

	taxTotal = carPrice * tax;
	liscTotal = carPrice * lisc;
	feeTotal = destFee + dealPrep;
	Total = taxTotal + liscTotal + feeTotal + carPrice;

	cout << "Tax & Fees: " << endl;
	cout << "Tax :" << taxTotal << endl;
	cout << "Liscence fee: " << liscTotal << endl;
	cout << "Extra Fees: " << feeTotal << endl;
	cout << "Total: " << Total << endl;
	getchar();

	return 0;
}

