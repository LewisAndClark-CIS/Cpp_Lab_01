/*****************
* CPP_Lab_01     *
* Challenge 1    *
******************
* Have user enter two     *
* of their favorite foods,*
* set each to favFood1/2  *
* respectfully..          *
* Print out the foods on  *
* the same line conjoined *
**************************/
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string favFood1 = "";
	string favFood2 = "";
	cout << "Enter your first favorite food:" << endl;
	cin >> favFood1;
	cout << endl << "Enter your second favorite food:" << endl;
	cin >> favFood2;
	cout << endl;
	cout << "Your dream meal is " << favFood1 << " " << favFood2 << endl;
	cin.ignore();
	cin.ignore();
}

