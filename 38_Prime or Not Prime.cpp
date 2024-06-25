#include<iostream> //#38
#include<string>
#include<cmath>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <=0 );
	

	return Number;
		

}

enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);

	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0)
			return enPrimeNotPrime::NotPrime;

	}
	return enPrimeNotPrime::Prime;

}

void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "\nThe Number is Prime\n";
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "\nThe Number is Not Prime\n";
		break;

	}

}

int main()
{
	PrintNumberType(ReadPositiveNumber("Please enter a positive number? "));

	return 0;
}