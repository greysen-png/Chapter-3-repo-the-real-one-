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

	cout << "Try solving THIS!!!";
	cout << setw(6) << firstNumber;
	cout << "+" << setw(5) << secondNumber;
	cout << "---------------------------";
	
	cin.get();

	cout << firstNumber + secondNumber;

	return 0;
}