// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, _TCHAR* argv[]){
	string Fortune1 = "I think your Fortune is to Please go away.. peasent";
	string Fortune2 = "Fall from a tree and land face first in 5 years";
	string Fortune3 = "The great 8 ball has no idea considering im not a 8 BALL!";
	string Fortune4 = "You will not eat for the next 6 years";
	string Fortune5 = "Your still here? WhY";
	int random = rand() % 5 + 1;
	if (random == 1){
		cout << Fortune1; 
	}
	else if (random == 2){
		cout << Fortune2; 
	}
	else if (random == 3){
		cout << Fortune3;
	}
	else if (random == 4){
		cout << Fortune4; 
	}
	else if (random == 5){
		cout << Fortune5; 
	}
	
	cin.get();
	cin.get();
	return 0;
}

