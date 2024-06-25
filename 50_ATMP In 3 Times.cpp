// Assume User Balance is 7500, PIN code = 1234.

#include<iostream> //#50
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
	int Counter = 3;

	do
	{
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1; // this will exit the function and return true.

		}
		else
		{
			system("color 4F"); // turn screen to Red.
			cout << "\nWrong PIN, you have " << Counter << " more tries \n";
			
		}

	} while (PinCode != "1234" && Counter >= 1);

	return 0; // when you reach here this means login faild.
}

int main()
{
	if (Login())
	{
		system("color 2F"); // turn screen to green
		cout << "\nYour account balance is " << 7500 << '\n';
	}
	else
	{
		cout << "\n Your card blocked call the bank for help. \n";
	}
	return 0;
}