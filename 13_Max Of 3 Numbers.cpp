#include<iostream> //#13
#include<string>

using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter Number 1 ? " << endl;
	cin >> Num1;

	cout << "Please enter Number 2 ? " << endl;
	cin >> Num2;

	cout << "Please enter Number 3 ? " << endl;
	cin >> Num3;
}

int MaxOf3Numbers(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2)
		if (Num2 > Num3)
			return Num1;
		else
			return Num3;
	else
		if (Num2 > Num3)
			return Num2;
		else
			return Num3;
	

}

void PrintResults(int Max)
{
	cout << "\n The Maximum Number is " << Max << endl;

}
int main()
{
	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintResults(MaxOf3Numbers(Num1, Num2, Num3));

	return 0;
}