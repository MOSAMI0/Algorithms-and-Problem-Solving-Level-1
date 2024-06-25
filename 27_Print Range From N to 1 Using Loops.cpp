#include<iostream> //#27
#include<string>
#include<cmath>

using namespace std;

int ReadNumber()
{
	int Nuber;

	cout << "Please enter a number ? " << endl;
	cin >> Nuber;

	return Nuber;
}

void PrintRangeFromNto1_UsingWhile(int N)
{
	int Counter = N + 1;

	cout << "\nRange printed using While Statement: \n";

	while (Counter > 1)
	{
		Counter--;
		cout << Counter << endl;

	}

}

void PrintRangeFromNto1_UsingDOWhile(int N)
{
	int Counter = N + 1;

	cout << "\nRange printed using Do..While Statement:\n";
	do
	{
		Counter--;
		cout << Counter << endl;

	} while (Counter > 1);
	
}

void PrintRangeFromNto1_UsingFor(int N)
{
	cout << "\nRang printed using For Statement: \n";
	for (int Counter  = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}


int main()
{
	int N = ReadNumber();
	PrintRangeFromNto1_UsingWhile(N);
	PrintRangeFromNto1_UsingDOWhile(N);
	PrintRangeFromNto1_UsingFor(N);

	return 0;
}