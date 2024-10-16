//Greysen Roy-Pascoe
//10/15/2024
//This is the 3rd and final project of Chp. 3 - the Interest Earned one
//Branched from main

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double interestRate, principal, timesCompounded;
	
	cout << "This thing calculates of money you'll have in an account when it's compounded or something like that" << endl << endl;

	cout << "What is the interest rate? Answer in decimal form,\nlike if it's 4.6%, put 0.46" << endl;
	cin >> interestRate;
	cout << endl;

	cout << "How often is it compounded per year? Like if it's quarterly it would be 4" << endl;
	cin >> timesCompounded;
	cout << endl;

	cout << "What's the principle or amount of money already in the account?" << endl;
	cin >> principal;
	cout << endl;

	double rateWithT = 1 + interestRate / timesCompounded;
	long amountInterest = principal * pow(rateWithT, timesCompounded); // This crap right here is screwing me over. I did this to myself. 
	float amountTotal = amountInterest + principal;

	
	cout << setw(25) << left << "Interest Rate:" << setw(11) << right << interestRate << "%" << endl;
	cout << setw(25) << left << "Times Compounded:" << setw(9) << right << timesCompounded << endl;
	cout << setw(25) << left << "Principal:" << "$" << setw(11) << right << setprecision(2) << fixed << showpoint << principal << endl;
	cout << setw(25) << left << "Interest:" << "$" << setw(11) << right << setprecision(2) << fixed << showpoint <<  interestRate << endl;
	cout << setw(25) << left << "Amount in Savings:" << "$" << setw(11) << right << setprecision(2) << fixed << showpoint << amountTotal << endl;
	// I mean, it works, so I'm gonna leave it be.

	return 0;
}