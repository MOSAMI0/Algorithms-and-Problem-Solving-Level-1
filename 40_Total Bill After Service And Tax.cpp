#include<iostream> //#40
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

float TotalBillAfterServiceAndTax(float TotakBill)
{
	TotakBill = TotakBill * 1.1;
	TotakBill = TotakBill * 1.16;

	return TotakBill;
}

int main()
{
	float ToatalBill = ReadPositiveNumber("Please Enter Total Bill?");

	cout << endl;
	cout << "Total Bill = " << ToatalBill << endl;
	cout << "Total Bill After Service Fee and Sales Tax = "
		<< TotalBillAfterServiceAndTax(ToatalBill) << endl;


	return 0;
}