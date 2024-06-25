#include<iostream> //#14
#include<string>

using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please enter Number 1 ? " << endl;
	cin >> Num1;

	cout << "Please enter Number 2 ? " << endl;
	cin >> Num2;

}

void Swap(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;

}

void PrintNumbers(int Num1, int Num2)
{
	cout << "\n Number1 = " << Num1 << endl;
	cout << "\n Number2 = " << Num2 << endl;
}

int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	cout << "---------------\n";
	Swap(Num1, Num2);
	PrintNumbers(Num1, Num2);

	

	return 0;
}