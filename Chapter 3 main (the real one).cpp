//Greysen Roy-Pascoe
//10/15/2024
//This is the branch for the math tutor program
//Branched from the master branch

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int main()
{
	random_device engine;
	int min = 100, max = 999;
	uniform_int_distribution<int> randomInt(min, max);

	int firstNumber = randomInt(engine), secondNumber = randomInt(engine);

	cout << "Try solving THIS!!!\n\n";
	cout << setw(6) << firstNumber << endl;
	cout << "+" << setw(5) << secondNumber << endl;
	cout << "-------\n\n";
	cout << "Press Enter or something when you're done\n";
	
	cin.get();

	cout << setw(6) << firstNumber + secondNumber;

	return 0;
}