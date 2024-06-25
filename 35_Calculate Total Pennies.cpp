#include<iostream> //#35
#include<string>
#include<cmath>

using namespace std;

struct stPiggyBankContenet
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet()
{
	stPiggyBankContenet PiggyBankContenet;

	cout << "Please enter a Total Pennies? " << endl;
	cin >> PiggyBankContenet.Pennies;
	cout << "Please enter a Total Nickels? " << endl;
	cin >> PiggyBankContenet.Nickels;
	cout << "Please enter a Total Dimes? " << endl;
	cin >> PiggyBankContenet.Dimes;
	cout << "Please enter a Total Quarters? " << endl;
	cin >> PiggyBankContenet.Quarters;
	cout << "Please enter a Total Dollars? " << endl;
	cin >> PiggyBankContenet.Dollars;

	return PiggyBankContenet;

}

int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
	int TotalPennies = 0;

	TotalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 + PiggyBankContenet.Dimes * 10 +
		PiggyBankContenet.Quarters * 25 + PiggyBankContenet.Dollars * 100;

	return TotalPennies;
}

int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
	cout << endl << "Total Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;


	return 0;
}