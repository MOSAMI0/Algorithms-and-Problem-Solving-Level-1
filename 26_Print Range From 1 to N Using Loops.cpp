#include<iostream> //#26
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

void PrintRangeFrom1toN_UsingWhile(int N)
{
	int Counter = 0;

	cout << "\nRange printed using While Statement: \n";

	while (Counter < N)
	{
		Counter++;
		cout << Counter << endl;

	}

}

void PrintRangeFrom1toN_UsingDOWhile(int N)
{
	int Counter = 0;

	cout << "\nRange printed using Do..While Statement:\n";
	do
	{
		Counter++;
		cout << Counter << endl;

	} while (Counter <N);
	
}

void PrintRangeFrom1toN_UsingFor(int N)
{
	cout << "\nRang printed using For Statement: \n";
	for (int Counter  = 0; Counter <= N; Counter++)
	{
		cout << Counter << endl;
	}
}


int main()
{
	int N = ReadNumber();
	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDOWhile(N);
	PrintRangeFrom1toN_UsingFor(N);

	return 0;
}