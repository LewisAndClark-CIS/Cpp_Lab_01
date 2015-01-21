// Lab01_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	
	int x = rand() % (5);


	if (x == 1)
	{
		cout << "You will recieve some amount of money soon";
	}
	else if (x == 2)
	{
		cout << "That wasn't chicken";
	}
	else if (x == 3)
	{
		cout << "Stay away from orange flags";
	}
	else if (x == 4)
	{
		cout << "Find a locker and hide inside of it";
	}
	else if (x == 5)
	{
		cout << "You lost the game";
	}
	getchar();

	return 0;
}

