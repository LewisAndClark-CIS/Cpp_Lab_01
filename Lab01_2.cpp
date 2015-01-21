// ConsoleApplication10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <iostream>
using namespace std;
int main(){
	float tipTotal;
	cout << "How much is the bill total? ";
	cin >> tipTotal;
	float tipOne = tipTotal * 0.15;
	float tipTwo = tipTotal * 0.20;
	cout << "A 15% tip would be: " << tipOne <<
		" A 20% tip would be: " << tipTwo << endl;
	system("pause");
	return 0;
}

