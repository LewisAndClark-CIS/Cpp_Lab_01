// Challenge_2.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	int first = 0;
	cout << "What is the bill price? ";
	cin >> first;
	cout << "15% tip is: " << first*.15 << endl;
	cout << "20% tip is: " << first*.20 << endl;
	return 0;
	getchar();

}
