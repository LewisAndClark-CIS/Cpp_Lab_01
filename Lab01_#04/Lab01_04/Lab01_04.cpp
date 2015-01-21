// Lab01_04.cpp : The Goal of this program is to make a random message generator.
//Author: Thomas Morrissey
//Date Written: 1-21-2015
//Program Name: Lab01_#04


#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main()
{
	int Number = rand() % 5 + 1;
	if (Number == 1) {
		cout << "HELLO WORLD!!!" << endl;}
	else if (Number == 2){
		cout << "I LIKE CIS!!!" << endl;}
	else if (Number == 3){
		cout << "I'M BATMAN!" << endl;
		cout << "Superman's better!" << endl;}
	else if (Number == 4){
		cout << "My name is Khan." << endl;
		cout << "KHAN" << endl;}
	else if (Number == 5){
		cout << "Sonic The Hedgehog" << endl;
		cout << "Making bad games since 2006." << endl;}
	getchar();
	return 0;
}

