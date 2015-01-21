// ConsoleApplication10.cpp : Defines the entry point for the console application.
//
/**********************************************************************
* Problem4.cpp                                                        *
* Author: Sam Coon                                                    *
* Date:  1/21/15                                                      *
* Include iostream, stdlib.h, and time.h                              *
* using namespace std                                                 *
* int main()                                                          *
* Set number to a random number 1-5                                   *
* set up an if statement with a different fortune for every number    *
**********************************************************************/
#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include "time.h"
using namespace std;
int main()
{
	srand(time(0));
	int number = rand() % 5 + 1;

	if(number == 1){
		cout << "You will fall down the stairs soon." << endl;
	}
	else if(number == 2){
		cout << "You will run into a door today." << endl;
	}
	else if(number == 3){
		cout << "You will come across some money today." << endl;
	}
	else if(number == 4){
		cout << "The cake is a lie." << endl;
	}
	else if (number == 5){
		cout << "Be careful where you go." << endl;
	}

	getchar();
	return 0;
}

