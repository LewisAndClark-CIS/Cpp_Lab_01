// Lab1_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{

	string food1 = "";
	string food2 = "";

	cout << "Enter your first favorite food? ";
	cin >> food1;

	cout << "Enter your second favorite food ";
	cin >> food2;
	cin.sync();

	cout << food1 + food2;

	getchar();
	return 0;
}