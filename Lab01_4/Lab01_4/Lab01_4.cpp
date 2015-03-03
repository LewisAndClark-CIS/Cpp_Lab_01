// Lab01_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;


int _tmain(){
	int cookie = NULL;
	srand(time(NULL));
	cookie = rand() % 4;

	if (cookie == 0){
		cout << "You might want to watch your back today";
	}

	if (cookie == 1){
		cout << "The stars are all aligned for you";
	}

	if (cookie == 2){
		cout << "Listen to the ones close to you";
	}

	if (cookie == 3){
		cout << "Today is going to bring you many riches";
	}

	if (cookie == 4){
		cout << "Do not eat your cookie!!";
	}

	getchar();
	return 0;

}

