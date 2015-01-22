// Lab01_4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <stdlib.h> 
#include <ctime>
#include <cstdlib>

using namespace std;

	int _tmain(){
		int cookie = NULL;
		srand(time(NULL));
		cookie = rand() % 4;

		if (cookie == 0){
			cout << "You will have a bad day, sorry.";
		}

		if (cookie == 1){
			cout << "You will have an exceptional day!";
		}

		if (cookie == 2){
			cout << "You'll have a 'meh' day.";
		}

		if (cookie == 3){
			cout << "You are going to die today.";
		}

		if (cookie == 4){
			cout << "You will survive, today.";
		}
		getchar();
		return 0;
	}

