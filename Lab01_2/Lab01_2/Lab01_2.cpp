// Lab01_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	float total;
	cout << "Please enter a bill total: ";
	cin >> total;
	getchar();
	cout << "15% of the tip is: " << total*.15 << endl;
	cout << "20% of the tip is: " << total*.20 << endl;
	getchar();
	return 0;
}

