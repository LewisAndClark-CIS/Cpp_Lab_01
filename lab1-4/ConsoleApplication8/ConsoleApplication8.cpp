// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "string"
#include <iostream>

using namespace std;


int main()
{
	int iSecret;
	srand(time(NULL));
	string cookie1 = "you will be wealthy in the future";
	string cookie2 = "engage your friends more you wont regret it";
	string cookie3 = "matt is dumb";
	string cookie4 = "sanic got to go fast";
	string cookie5 = "you will eat this forchane cookie;";
	iSecret = rand() % 5 + 1;
	if (iSecret == 1){ cout << cookie1; }
	else (iSecret == 2); { cout << cookie2; }
	if (iSecret == 3); { cout << cookie3; }
	if (iSecret == 4); { cout << cookie4; }
	else (iSecret == 5); { cout << cookie5; }

	return 0;
}

