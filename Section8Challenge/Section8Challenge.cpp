// Section8Challenge.cpp : Defines the entry point for the application.

#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	* One dollar is 100 cents
	* One quarter is 25 cents
	* One dime is 10 cents
	* One nickel is 5 cents
	* One penny is 1 cent
	*
	* The program will ask how many cents/dollars the user has.
	* Then it will tell the user how many coins they have.
	*
	*/

	// Declare variables
	string amount;
	double dollars{ 0 }, cents{ 0 }, quarters{ 0 }, dimes{ 0 }, nickels{ 0 }, pennies{ 0 };
	const int dollar_value{ 100 };
	const int quarter_value{ 25 };
	const int dime_value{ 10 };
	const int nickel_value{ 5 };
	// Ask user for amount of money
	cout << "Enter the amount of dollar/cents you have (put a \"d\" after the number to indicate dollars): ";
	cin >> amount;
	// Check if user entered a dollar amount
	if (amount.at(amount.length() - 1) == 'd' or amount.at(amount.length() - 1) == 'D')
	{
		// Remove the "d" from the end of the string
		amount.erase(amount.length() - 1);
		// Convert string to int
		dollars = stoi(amount);
		// Calculate cents
		cents = dollars * 100;
	}
	else
	{
		// Convert string to int
		cents = stoi(amount);
	}
	/*
	* If the user did not enter a dollar amount, then we need to convert cents to dollars
	*/
	if (cents > 0)
	{
		// Calculate dollars
		dollars = cents / dollar_value;
	}

	double balance{ 0 };
	
	balance = cents - (dollars * dollar_value);

	quarters = (balance / quarter_value);
	
	dimes = (balance / dime_value);
	
	nickels = (balance / nickel_value);
	
	balance -= (nickels * nickel_value);
	
	pennies = balance;
	// Display results
	cout << "Dollars: " << dollars << endl;
	cout << "Quarters: " << quarters << endl;
	cout << "Dimes: " << dimes << endl;
	cout << "Nickels: " << nickels << endl;
	cout << "Pennies: " << pennies << endl;
	return 0;
}
