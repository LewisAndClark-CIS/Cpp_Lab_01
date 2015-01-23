// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;




int main(){

	string food = "";
	string food2 = "";

	cout << "What is your favorite food? pick two: " << endl;
	cin >> food;
	cin >> food2;
	cout << food;
	cout << food2;
	cout << food << food2 << endl;
	getchar();
	return 0;
}

