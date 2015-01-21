// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <string>
#include <iostream>
using namespace std;
int main(void){
	string favFood1;
	cout << "What is your favorite food? ";
	getline(cin, favFood1);
	string favFood2;
	cout << "What is your second favorite food? ";
	getline(cin, favFood2);
	cout << "Your new food is: " << favFood1 << " " << favFood2;
	return 0;
}
