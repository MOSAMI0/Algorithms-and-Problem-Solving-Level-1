#include<iostream> //#30
#include<string>
#include<cmath>

using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

int Factorial(int Number)
{
	int factorial = 1;

	for (int Counter = Number; Counter >= 1; Counter--)
	{
		factorial *= Counter;
	}

	return factorial;
}
int main()
{
	cout << Factorial(ReadPositiveNumber("Enter a positive number? ")) << endl;

	return 0;
}