// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	double bill;
	double tip1;
	double tip2;
	cout << "what is the total of the bill";
	cin >> bill;
	tip1 = bill * .15;
	tip2 = bill * .2;

	cout << "your 15% tip is"<< tip1 << endl;
	cout << "your 20% tip is" << tip2 << endl;
	cin.ignore();
	cin.ignore();
	return 0;
}

