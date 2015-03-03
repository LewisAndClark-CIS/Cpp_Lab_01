// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string fav1 = "";
	string fav2 = ""; 

	cout << "Enter your 1st favorite food: " << endl;
	cin >> fav1;
	cin.sync();

	cout << "Enter your 2nd favorite food: " << endl;
	cin >> fav2;
	cin.sync();
	
	cout << fav1 << fav2 << endl;
	
	return 0;
}

