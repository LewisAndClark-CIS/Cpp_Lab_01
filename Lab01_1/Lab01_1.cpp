/* ConsoleApplication6.cpp : Defines the entry point for the console application.
********************
* Creator: Brad    *
* Date: 1/20/14    *
* Lab01_1          *
********************
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{	//Initialize Variables
	string food1, food2;
	//First food
	cout << "Type in your number 1 favorite food: ";
	cin >> food1;
	//2nd food
	cout << "Type in your number 2 favorite food: ";
	cin >> food2;
	//Printing both
	cout << food1 << food2 << endl;
	//System pausing so the window does not close immediately
	system("pause");
	
	return 0;
}

