// Lab01_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

using namespace std;
int main(void){
	string foodOne;
	string foodTwo;
	cout << "Please enter one of your favorite foods. ";
	getline (cin,foodOne);
	cout << "Please enter a different favorite food. ";
	getline (cin,foodTwo);
	string newFood = foodOne + foodTwo;
	cout << "Your new favorite food is " << newFood << ".";
	getchar();
	return 0;
}