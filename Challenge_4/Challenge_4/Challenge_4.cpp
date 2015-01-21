// Challenge_4.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <iostream>
#include "stdlib.h"
#include "time.h"
using namespace std;


int main()
{
	srand(time(0));
	int number = rand() % 5 + 1;
	if (number == 1){
		cout << "You will win the lottery." << endl;
	}
	else if (number == 2){
		cout << "You will not win the lottery." << endl;
	}
	else if (number == 3){
		cout << "You will fall down the stairs." << endl;
	}
	else if (number == 4){
		cout << "You will get pooped on by a bird." << endl;
	}
	else if (number == 5){
		cout << "You will lose you're phone." << endl;
	}
	return 0;
	getchar();

}