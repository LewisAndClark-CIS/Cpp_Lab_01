// Challenge 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string food1="";
	string food2="";
	cout << "What is your first favorite food? ";
	getline(cin, food1);
	cout << "What is your second favorite food? ";
	getline(cin, food2);
	cout << " Combined food: " << food1 << " " << food2;
	getchar();
	return 0;
}

