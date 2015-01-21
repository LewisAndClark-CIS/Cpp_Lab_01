// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
	int number = rand() % 5 + 1;
	if (number == 1){
		cout << "Your future is looking very bright!" << endl;
	}
	else if (number == 2){
		cout << "You might want to re-evaluate your latest life choice." << endl;
	}
	else if (number == 3){
		cout << "Your greatest quality will soon be revealed." << endl;
	}
	else if (number == 4){
		cout << "Keep your loved ones close, they know best." << endl;
	}
	else if (number == 5){
		cout << "Your attitude towards life could use an adjustment." << endl;
	}
	getchar();
	return 0;
}
