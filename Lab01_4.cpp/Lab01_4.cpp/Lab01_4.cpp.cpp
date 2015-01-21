// Lab01_4.cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
/*************************
* prints a random fortune
************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	srand(time(0));
	string fortunes[] = { "You will stub your toe", "You will lose something important",
		"Someone important will enter your life", "watch your step",
		"green is in your future" };
	int choice = rand() % 5;
	cout << fortunes[choice] << endl;
	getchar();
}
