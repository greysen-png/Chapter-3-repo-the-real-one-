//Greysen Roy-Pascoe
//10/15/2024
//From the master branch
//Ingredient adjuster project-thing

#include <iostream>
using namespace std;

int main()
{
	float sugar = 1.5 / 48, butter = 1.0 / 48, flour = 2.75 / 48;
	int cookiesUrBoyWants;

	cout << "How many cookies do ya want? ";
	cin >> cookiesUrBoyWants;

	float cupsSugar = sugar * cookiesUrBoyWants;
	float cupsButter = butter * cookiesUrBoyWants;
	float cupsFlour = flour * cookiesUrBoyWants;

	cout << "To make " << cookiesUrBoyWants << "cookie(s), you'll need:\n\n" << //is it bad to not use ; like in this part?
		cupsSugar << " cups sugar\n" << 
		cupsButter << " cups butter\n" <<
		cupsFlour << " cups flour\n\n" <<
		"Everything is in cups, so the decimals might be a bit large\n";

	return 0;
}