#include<iostream> //#34
#include<string>
#include<cmath>

using namespace std;

int ReadTotalSales()
{
	int TotalSales;

	cout << "Please enter a total sales? " << endl;
	cin >> TotalSales;

	return TotalSales;
	
}

float GetComissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;

}

float CalculateTotalComission(float TotalSales)
{
	return GetComissionPercentage(TotalSales) * TotalSales;
}

int main()
{
	float TotalSales = ReadTotalSales();

	cout << endl << "Comission Percentage = " << GetComissionPercentage(TotalSales);
	cout << endl << "Total Comission = " << CalculateTotalComission(TotalSales);

	return 0;
}