// Lab01_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main()
{
	int	number;
	srand(time(0));
	number = rand() % 5 + 1;
		if (number == 1) {
		cout << "You will find many riches";
	}
	if (number == 2){
		cout << "A very special event will take place soon";
	}

	if (number == 3){
		cout << "Your life will change abrubtly soon..";
	}

	if (number == 4){
		cout << "Great things are in store for you";
	}

	if (number == 5){
		cout << "Stay true to yourself and things will stay on course for you";
	}

	getchar();
	return 0;
}

