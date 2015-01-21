// Lab01_01.cpp : The goal of this program is to take two strings and add them together to create a new string.
//Author:Thomas Morrissey
//Collaborated With Luke Gosnell
//Date: 1-20-2014
// Program Name: Lab01_01

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string str01;
	cout << "What is your favorite food: ";
	cin >> str01;
	getchar();
	string str02;
	cout << "What is your second favorite food: ";
	cin >> str02;
	getchar();
	cout << "New Food: " << str01 << str02;
	getchar();
	return 0;
}
