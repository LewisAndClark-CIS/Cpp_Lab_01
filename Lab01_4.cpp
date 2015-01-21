/*********************
* Cpp_Lab_01         *
* Lab01_4            *
**********************
* generate a random  *
* number, set to     *
* 'num', then use    *
* 'if' statements    *
* to correspond each *
* possible number to *
* a specific fortune *
*********************/
#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;
int main()
{
	int num = 0;
	srand (time(NULL));
	num = rand() % 5 + 1;
	if (num == 1){
		cout << "You will live a fulfilling life:D";
	}
	else if (num == 2){
		cout << "A bear will be your ultimite demise:(";
	}
	else if (num == 3){
		cout << "Keep playing the lottery, and you will eventually win:D";
	}
	else if (num == 4){
		cout << "You will get violent diarhea from this..awkward.";
	}
	else if (num == 5){
		cout << "You paid extra for the 'free' eggroll>:D";
	}
	getchar();
	return 0;
}

