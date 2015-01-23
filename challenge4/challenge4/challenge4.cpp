// challenge4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

int main(){

	int number = 0;
	srand(time(0));
	number = rand() % 5 + 1;
	if (number == 1) {
		cout << "Dont except candy from strangers.";
		
	}
	if (number == 2){
		cout << "When nothing goes right, go left.";
		
	}
	
	if (number == 3){
		cout << "When life gives you lemons, WING IT!";
		
	}
	
	if (number == 4){
		cout << "Work smarter not harder.";
		
	}
	
	if (number == 5){
		cout << "Keep calm and call Jarvis.";
	}


	getchar();
	return 0;
}

