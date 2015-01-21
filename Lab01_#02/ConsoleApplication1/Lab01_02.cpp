// ConsoleApplication1.cpp : This program is a tipping machine. 
//Program Name:Lab01_02
//Date Written:1-20-2015
//Author: Thomas Morrissey

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int number;
	cout << "Please Enter Bill Total: ";
	cin >> number;
	getchar();
	cout << "A 15% tip is " << number*0.15 << " dollars" << ".\n";
	cout << "A 20% tip would be " << number*0.20 << " dollars" << ".\n";
	getchar();
	return 0;
}

