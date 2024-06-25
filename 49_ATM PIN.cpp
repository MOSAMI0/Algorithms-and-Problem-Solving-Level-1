// Assume User Balance is 7500.

#include<iostream> //#49
#include<string>
#include<cmath>

using namespace std;

string ReadPinCode()
{
	string PinCode;
	cout << "Please enter PIN code \n";
	cin >> PinCode;

	return PinCode;

}

bool Login()
{
	string PinCode;

	do
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1; // this will exit the function and return true.

		}
		else
		{
			cout << "\nWrong PIN\n";
			system("color 4F"); // turn screen to Red.
		}

	} while (PinCode != "1234");

	return 0; // when you reach here this means login faild.
}

int main()
{
	if (Login())
	{
		system("color 2F"); // turn screen to green
		cout << "\nYour account balance is " << 7500 << '\n';
	}

	return 0;
}