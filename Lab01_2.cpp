/*******************
* Program: Lab01_2 *
* Date: 1/21/2015  *
* Author: Bo Meers *
********************/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

	double billTotal;
	double tip15;
	double tip20;

	cout << "What was the total of your bill? " << endl;
	cin >> billTotal;
	cin.sync();
	tip15 = billTotal * .15;
	cout << endl << "A 15% tip would be " << tip15;
	tip20 = billTotal * .20;
	cout << endl << "A 20% tip would be " << tip20;
	cout << endl << endl << "Press <Enter> to exit. ";
	getchar();
	return 0;
}
