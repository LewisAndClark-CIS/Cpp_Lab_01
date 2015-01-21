// Lab_01_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
	float total = 0.0;
	cout << "Total Bill: ";
	cin >> total;
	getchar();
	cout << "15% tip: " << total*.15;
	cout << "20% tip: " << total* .20;

	getchar(); //pause the screen.
	return 0;
}