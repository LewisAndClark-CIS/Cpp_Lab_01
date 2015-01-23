// lab2.cpp : Defines the entry point for the console application.
// Pope Tom Helped

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



int main(){
	int bill = 0;

	cout << "What was the bill?: ";
	cin >> bill;
	getchar();
	cout << "15%  tip is: " << bill* .15 << endl;
	cout << "20% tip is: " << bill* .20 << endl;
	getchar();

	return 0;
}

