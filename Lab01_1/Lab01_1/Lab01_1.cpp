//Program: Lab01_1.cpp
//Author: Luke Gosnell
//Date: 1/20/2015
//This program asks what the user's two favorite foods are and combines them to make a new food.

// Lab01_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string favFood;
	cout << "What's your favorite food? ";
	cin >> favFood;
	getchar();

	string favFood1;
	cout << "What's your second favorite food? ";
	cin >> favFood1;
	getchar();

	cout << "New food: " << favFood << favFood1;
	getchar();
	return 0;
}

