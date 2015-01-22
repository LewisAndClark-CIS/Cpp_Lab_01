//Joe Carty
//1/21/15
// Contibutions: Tom Morrissey

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

int main(){
	double basePrice = 0;
	cout << "Enter base price. ";
	cin >> basePrice;
	getchar();
	double tax = basePrice*1.08;
	double licencePrice = basePrice*1.03;
	int dealerPrep = 300;
	int destCharge = 300;
	double totalPrice = basePrice + tax + licencePrice + dealerPrep + destCharge;
	
	cout << "Total Price: " << totalPrice;
	getchar();

	
	
	getchar(); //pause the screen.
	return 0;
}