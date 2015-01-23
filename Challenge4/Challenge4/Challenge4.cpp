// Challenge4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int _tmain()
{
	int number;
	srand(time(0));
	number = rand() % 5 + 1;
	if (number == 1){
		cout << "Knowing is not enough, we must apply. \n Willing is not enough, we must do. -Bruce Lee";
	}
	if (number == 2){
		cout << "Don't pray for an easy life, \n pray for the strength to endure a difficult one. -Bruce Lee";
	}
	if (number == 3){
		cout << "Mistakes are always forgivable, \n If one has the courage to forgive them. -Bruce Lee";
	}
	if (number == 4){
		cout << "Simplicity is the key to brilliance. -Bruce Lee";
	}
	if (number == 5){
		cout << "Live long and prosper. -Spock";
	}
	getchar();
	return 0;
}

