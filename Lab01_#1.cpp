// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string food1 = "";
	string food2 = "";

	cout << "What is one of your favorite foods? ";
	cin >> food1;
	cout << "What is another one of your favorite foods? ";
	cin >> food2;
	cout << "Your new favorite food is " << food1 << food2 << endl;

	getchar();
	getchar();
	return 0;
}
