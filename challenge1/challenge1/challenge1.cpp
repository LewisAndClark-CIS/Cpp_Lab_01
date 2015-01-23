// challenge1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



int main(){

	string fav1 = "";
	string fav2 = "";
	cout << "What's your favorite food? ";
	cin >> fav1;
	cout << "What's your other favorite food? ";
	cin >> fav2;
	cout << fav1 << fav2 << endl;
	
	getchar();
	return 0;
}

