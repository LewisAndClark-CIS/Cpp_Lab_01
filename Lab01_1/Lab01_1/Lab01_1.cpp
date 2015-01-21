// Lab01_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	;

	string food1 = "";
	string food2 = "";
	string combinedFood = "";
	cout << "Enter in your first favorite food: ";
	cin >> food1;
	cout << "Enter in your second favorite food: ";
	cin >> food2;
	combinedFood = food1 + food2;
	cout << "Here try some tasty " << combinedFood <<"." <<endl;
	getchar();
	return 0;
}

