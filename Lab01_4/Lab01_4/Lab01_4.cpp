// Lab 1.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string fortune0 = "Your gonna survive a near death experience.";
	string fortune1 = "Your gonna get shot in the leg only to live paralyzed for life.";
	string fortune2 = "Your gonna get married and have many kids only to watch them get slaughtered by a home intruder.";
	string fortune3 = "Your gonna die....";
	string fortune4 = "Dead";
	string rrandom = rand() % 6;

	if (rrandom = 0)
	{
		cout << fortune0;
	}
	else if (rrandom = 1)
	{
		cout << fortune1;
	}
	else if (rrandom = 2)
	{
		cout << fortune2;
	}
	else if (rrandom = 3)
	{
		cout << fortune3;
	}
	else if (rrandom = 4)
	{
		cout << fortune4;
	}
	getchar();

	return 0;
}

