




#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

srand(time(0));
	int number = rand() % 5 + 1;
	if (number == 1) {
		cout << "Watch your back. ";
	}
	if (number == 2) {
		cout << "Good comes to those who are patient. ";
	}
	getchar();

	if (number == 3) {
		cout << "He who climbs a ladder must begin at the first step. ";
	}

	if (number == 4) {
		cout << "Today is going to be a disasterous day, be prepared. ";
	}

	if (number == 5) {
		cout << "You will take a pleasant journey to a place far away. ";
	}

		getchar(); //pause the screen.
	return 0;
}