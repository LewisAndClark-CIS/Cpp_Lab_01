// challenge2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main(){

	double bill = 0;
	cout << "What is amount on bill: ";
	cin >> bill;
    getchar();
	cout << "15% tip is: " << bill* .15 << endl;
	cout << "20% tip is: " << bill* .20 << endl;
	getchar();
	
	return 0;
}

