// Lab01_1.cpp : 
// Andrew Hecky | 1-20-2015
/*********************************************************************
*  Write a program that allows a user to enter his or her two        *
*   favorite foods. The program should then print out the name of    *
*   a new food by joining the original food names together.          *
*********************************************************************/

#include "stdafx.h"
//#include <stdio.h>
#include <iostream>
#include <string>
//#include <stdlib.h>
//#include <math.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string food1, food2;
	cout << "What is your First favorite food? ";
	cin >> food1;
	cout << "What is your Second favorite food? ";
	cin >> food2;
	cout << "Your new favorite food is: " << food1 << "-" << food2 << "!" << endl ;
	getchar();
	system("pause");
	return 0;
}

