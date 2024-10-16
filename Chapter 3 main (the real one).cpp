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

	cout << "What is the interest rate? Answer in decimal form " << endl;
	cin >> interestRate;

	cout << "How often is it compounded per year? Like if it's quarterly it would be 4 " << endl;
	cin >> timesCompounded;

	cout << "What's the principle or amount of money already in the account?" << endl;
	cin >> principal;

	double rateWithT = 1 + interestRate / timesCompounded;
	long amountInterest = principal * pow(rateWithT, timesCompounded);
	float amountTotal = amountInterest + principal;

	int width = 20;
	int width2 = 10;
	cout << setw(width) << left << "Interest Rate:" << setw(width) << interestRate << "%" << endl;
	cout << setw(width) << left << "Times Compounded:" << setw(width) << timesCompounded << endl;
	cout << setw(width) << left << "Principal:" << "$" << setw(width2) << setprecision(2) << fixed << showpoint << principal << endl;
	cout << setw(width) << left << "Interest:" << "$" << setw(width2) << setprecision(2) << fixed << showpoint <<  interestRate << endl;
	cout << setw(width) << left << "Amount in Savings:" << "$" << setw(width2) << setprecision(2) << fixed << showpoint << amountTotal << endl;

	return 0;
}