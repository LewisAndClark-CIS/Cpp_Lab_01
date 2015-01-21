//Program: Lab01_4.cpp
//Author: Luke Gosnell
//Date: 1/21/2015
//Contributers: Tom Morrissey
//This program gives the user a fortune cookie and lets them open it.


#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()

{
	string fortune1 = "~You will be visited by a certain flying squirrel tonight~";
	string fortune2 = "~The Great Jolly Panda will show you the way~";
	string fortune3 = "~Your parents are with the lobsterpeople now. Be happy for them~";
	string fortune4 = "~FLOOP IS A MADMAN HELP US SAVE US~";
	string fortune5 = "~Your baby may or may not be a zarblankoid, depending on marriage laws in 2058~"; 
	int number = 0;
	
	srand(time(0));
	number = rand() % 5 + 1;
	cout << "You got a fortune cookie! Press enter to open it!";
	getchar();

	if (number == 1){
		cout << fortune1;
	}
	else if (number == 2){
		cout << fortune2;
	}
	else if (number == 3){
		cout << fortune3;
	}
	else if (number == 4){
		cout << fortune4;
	}
	else if (number == 5){
		cout << fortune5;
	}
	getchar();
	return 0;
}

