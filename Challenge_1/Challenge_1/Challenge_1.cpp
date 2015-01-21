// Challenge_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	string first = "";
	string second = "";
	cout << "What is you're favorite food? ";
	cin >> first;
	cout << "What is you're favorite food? ";
	cin >> second;
	cout << "The food's name put together are: " << first + second << endl;
	return 0;
	getchar();
	
}

