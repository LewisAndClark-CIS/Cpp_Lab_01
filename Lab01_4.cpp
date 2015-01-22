/*******************
* Program: Lab01_4 *
* Date: 1/22/2015  *
* Author: Bo Meers *
********************/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
	string choice;
	int randNum;
	int game = 1;

	while (game == 1){
		cout << "Receive a fortune? (Y/N)" << endl;
		cin >> choice;
		cin.sync();
		if (choice == "Y" || choice == "y"){
			randNum = rand() % 5 + 1;

			if (randNum == 1){
				cout << endl << "You're going to die soon... " << endl << endl;
			}
			else if (randNum == 2){
				cout << endl << "You are secretly MLG " << endl << endl;
			}
			else if (randNum == 3){
				cout << endl << "HALF-LIFE 3 CONFIRMED!!! " << endl << endl;
			}
			else if (randNum == 4){
				cout << endl << "Give up on trying to win that game. Truth is, you'll never beat it. " << endl << endl;
			}
			else if (randNum == 5){
				cout << endl << "Don't go near the red table. It's Bad. " << endl << endl;
			}
		}
		else if (choice == "n" || choice == "N"){
			break;
		}
	}
	cout << "Press <Enter> to exit. ";
	getchar();
	return 0;
}
