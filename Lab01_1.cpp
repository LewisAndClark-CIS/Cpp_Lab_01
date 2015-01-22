/*******************
* Program: Lab01_1 *
* Date: 1/21/2015  *
* Author: Bo Meers *
********************/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string favOne;
string favTwo;

int _tmain(){
	cout << "What is your favorite food? " << endl;
	cin >> favOne;
	cin.sync();
	cout << endl << "What is your second favorite food? " << endl;
	cin >> favTwo;
	cin.sync();
	cout << endl << "Now your new favorite food is " << favOne << favTwo << "." << endl << endl;
	cout << "Press <Enter> to exit. ";
	getchar();
	return 0;
}

