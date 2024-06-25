#include<iostream> //#32
#include<string>
#include<cmath>

using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter a number? \n";
	cin >> Number;
	return	Number;

}

int ReadPower()
{
	int Number;
	cout << "Please enter the power? \n";
	cin >> Number;
	return	Number;

}

int PowerOfM(int Number, int M)
{
	if (M == 0)
	{
		// Any number powered to zero gives 1.
		return 1;
	}

	int P = 1;

	for (int i = 1; i <= M; i++)
	{
		P *= Number;

	}

	return P;

}

int main()
{
	cout << endl << " Result: " << PowerOfM(ReadNumber(), ReadPower());
	return 0;
}