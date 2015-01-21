// lab01_1.cpp
// Jason Nguyen
// 1/21/15

#include "stdafx.h"
#include <iostream>
#include <string> 

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string favfood_1;
	string favfood_2;
	cout << "Enter your first favorite food: ";
	cin >> favfood_1;
	cout << "Enter your second favorite food: ";
	cin >> favfood_2;
	cout << "Your new favorite food is: " << favfood_1 + favfood_2;
	getchar();

	return 0;
}

