/***************
* Cpp_Lab_01   *
* Lab01_2      *
****************
* Take in a float   *
* amount entered by *
* the user, set to  *
* 'bill'            *
* Calculate tips,   *
* Set to tip15/20   *
* respectfully      *
* Print results     *
********************/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	float bill = 0;
	float tip15 = 0;
	float tip20 = 0;
	cout << "Enter your bill amount: ";
	cin >> bill;
	cout << endl;
	tip15 = (bill * .15);
	tip20 = (bill * .20);
	cout << "Your tip at 15% is: $" << tip15 << endl;
	cout << "Your tip at 20% is: $" << tip20 << endl;
	cin.ignore();
	cin.ignore();
	return 0;
}

