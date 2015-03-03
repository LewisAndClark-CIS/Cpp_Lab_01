// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 
#include <string>
#include <stdlib.h>
#include <time.h> 


int _tmain(int argc, _TCHAR* argv[])
{
	int forTune;
	srand(time(NULL));
	forTune = rand() % 5 + 1;

	
	if (forTune == 1);
	{
		cout << "You future looks promising!";
	}

	if (forTune == 2);
	{
		cout << "Have a nice day!";
	}

	if (forTune == 3);
	{
		cout << "I see pizza in your future.";
	}

	if (forTune == 4);
	{
		cout << "Don't look behind you! D:";
	}

	if (forTune == 5);
	{
		cout << "Never quit on your dreams, go back to sleep!";
	}
	
	cout << forTune;
	getchar();

	return 0;
}

