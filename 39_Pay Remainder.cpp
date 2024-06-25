#include<iostream> //#39
#include<string>
#include<cmath>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);


	return Number;


}

float CalculateRemainder(float TotakBill, float TotalCashPaid)
{
	return TotalCashPaid - TotakBill;
}

int main()
{
	float ToatalBill = ReadPositiveNumber("Please Enter Total Bill?");
	float ToatlCashPaid = ReadPositiveNumber("Please Enter Cash Paid?");

	cout << endl;
	cout << "Total Bill = " << ToatalBill << endl;
	cout << "Total Cash Paid = " << ToatlCashPaid << endl;

	cout << "___________________________________\n";
	cout << "Remainder = " << CalculateRemainder(ToatalBill, ToatlCashPaid) << endl;



	return 0;
}