// Problem 4.cpp : Defines the entry point for the console application.
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
	
	if(number == 1){
		cout << "You must continue doing what you love." << endl;
	}
	else if(number == 2){
		cout << "Don't let the man hold you down!" << endl;
	}
	else if(number == 3){
		cout << "Don't forget." << endl;
	}
	else if(number == 4){
		cout << "LEAVE THIS PLACE NOW" << endl;
	}
	else if(number == 5){
		cout << "THE END IS NEAR!" << endl;
	}
	getchar();
	return 0;
}

