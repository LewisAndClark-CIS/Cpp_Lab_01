// lab01_4.cpp
// Jason Nguyen
// 1/21/15

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string fortunes[5] = { "Fortune 1", "Fortune 2", "Fortune 3", "Fortune 4", "Fortune 5" };
	srand((unsigned)time(0));
	int random_int;
	random_int = (rand() % 5) + 1;
	cout << fortunes[random_int];
	getchar();
	return 0;
}

