/*****************
* Lab01_4.cpp    *
* By: Zach Golik *
* Date: 1/20/15  *
*****************/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]){
	string enter;
	cout << "Welcome to the greatness that is..." << endl
		<< "ZACH GOLIK'S FORTUNE TELLER 2K15!!!!" << endl
		<< "Type anything and press <enter> to read your fortune. ";
	cin >> enter;
	int fortune = rand() % 5 + 1;
	if (fortune == 1){
		cout << "I see wealth in your future." << endl;
	}
	else if (fortune == 2){
		cout << "I see death in your future." << endl;
	}
	else if (fortune == 3){
		cout << "You will gain a welcome compainian today." << endl;
	}
	else if (fortune == 4){
		cout << "You will find a new hobby today that will change your life." << endl;
	}
	else if (fortune == 5){
		cout << "You'll meet an old friend today." << endl;
	}
	else{
		cout << "Error!" << endl;
	}
	getchar();
	system("pause");
	return 0;
}