// Lab01_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	int random = 0;
	string yes = "s";
	cout << "Do you want a foutune cookie? Y/N. ";
	cin >> yes;
	if (yes == "Y")
		
		random = rand() % 4 + 1;
		if (random == 1)
			cout << "A squirrel will die in your car." << endl;
		else if (random == 2)
			cout << "You will find your lucky penny." << endl;
		else if (random == 3)
			cout << "Beware of birds." << endl;
		else if (random == 4)
			cout << "You will experiance backups in Mexico." << endl;
		else if (random == 5)
			cout << "You get to see another day." << endl;



	getchar();
	return 0;
}

