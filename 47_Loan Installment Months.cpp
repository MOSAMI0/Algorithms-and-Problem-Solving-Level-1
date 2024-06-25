#include<iostream> //#47
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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return (float)LoanAmount / MonthlyInstallment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment?");

	cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << " months" << endl;
	cout << endl;

	return 0;
}