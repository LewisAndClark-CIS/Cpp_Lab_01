// Lab01_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	float bill;
	cout << "Enter the restaurant bill: ";
	cin >> bill;
	float tip15 = (bill * .15);
	float tip20 = (bill * .2);
	cout << "A 15% tip would be " << tip15 << ".";
	cout << "A 20% tip would be " << tip20 << ".";
	system("pause");
	return 0;
}
