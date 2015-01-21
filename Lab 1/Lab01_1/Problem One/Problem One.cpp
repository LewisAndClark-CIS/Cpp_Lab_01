// Problem One.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	char* favFood1 = "";
	char* favFood2 = "";
	cout << "What are your favorite foods? " << endl;
	cout << "First favorite food: " << endl;
	cin >> favFood1 >> endl;
	cout << "Second favorite food? " << endl;
	cin >> favFood2 >> endl;
	cout << "Your favorite foods are" << favFood1 << "And" << favFood2;
	
	getchar();
	getchar();
	return 0;
}

