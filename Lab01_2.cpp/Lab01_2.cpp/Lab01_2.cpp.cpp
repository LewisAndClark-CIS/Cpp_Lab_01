// Lab01_2.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/***************************
* Gives the user the proper
* 15% and 20% tip amount
* for a given bill
***************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	double bill = 0;
	double fifteen = 0;
	double twenty = 0;
	cout << "Enter the bill total: ";
	cin >> bill;
	cin.sync();
	fifteen = bill * .15;
	twenty = bill * .2;
	cout << "15%: " << fifteen << endl << "20%: " << twenty << endl;
	getchar();
}