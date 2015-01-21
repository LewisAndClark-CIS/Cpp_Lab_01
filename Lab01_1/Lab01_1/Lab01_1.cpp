// Lab01_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string firstFavorite = "";
	string secondFavorite = "";
	string newFood = "";

	cout << "Enter your favorite food: ";
	cin >> firstFavorite;
	cout << "Enter your second favorite: ";
	cin >> secondFavorite;
	newFood = firstFavorite + secondFavorite;
	cout << newFood << endl;
	cin.ignore();
	cout << "<Press Enter>";
	cin.ignore();
	return 0;
}

