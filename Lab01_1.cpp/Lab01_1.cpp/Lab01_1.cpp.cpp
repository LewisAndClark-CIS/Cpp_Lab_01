// Lab01_1.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string food1 = "";
	string food2 = "";
	cout << "Please enter your two favorite foods: ";
	cin >> food1 >> food2;
	cin.sync();
	cout << food1 << food2;
	getchar();
}