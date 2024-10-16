//Greysen Roy-Pascoe
//10/15/2024
//This is the 3rd and final project of Chp. 3

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	long interestRate, principal;
	int timesCompounded;

	cout << "This thing calculates of money you'll have in an account when it's compounded or something like that" << endl << endl;

	cout << "What is the interest rate? Answer in decimal form";
	cin >> interestRate;

	cout << "How often is it compounded per year? Like if it's quarterly it would be 4";
	cin >> timesCompounded;

	cout << "What's the principle or amount of money already in the account?";
	cin >> principal;

	long amountInterest = principal * pow(double (1 + interestRate / timesCompounded), timesCompounded);
	float amountTotal = amountInterest + principal;

	int width = 20;
	int width2 = 10;
	cout << setw(width) << left << "Interest Rate:" << setw(width) << interestRate << "%" << endl;
	cout << setw(width) << left << "Times Compounded:" << setw(width) << timesCompounded << endl;
	cout << setw(width) << left << "Principal:" << "$" << setw(width2) << setprecision(2) << fixed << principal << endl;
	cout << setw(width) << left << "Interest:" << "$" << setw(width2) << setprecision(2) << fixed << interestRate << endl;
	cout << setw(width) << left << "Amount in Savings:" << "$" << setw(width2) << setprecision(2) << fixed << amountTotal << endl;

	return 0;
}