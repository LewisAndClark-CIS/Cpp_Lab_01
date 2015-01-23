// lab01_2.cpp
// Jason Nguyen
// 1/21/15

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double bill_total;

	cout << "Bill total: ";
	cin >> bill_total;

	cout << "15 percent tip: " << bill_total * .15 << endl;
	cout << "20 percent tip: " << bill_total * .2;
	getchar();
	return 0;
}

