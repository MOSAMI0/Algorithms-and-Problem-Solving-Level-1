#include<iostream> //#16
#include<string>
#include<cmath>

using namespace std;

void ReadNumbers(float& A, float& D)
{
	cout << "Please enter rectangle side A ?" << endl;
	cin >> A;

	cout << "Please enter rectangle diagonal D ?" << endl;
	cin >> D;

}

float RectangleAreaBySideAndGiagonal(float A, float D)
{
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	float A, D;
	ReadNumbers(A, D);
	PrintResults(RectangleAreaBySideAndGiagonal(A, D));


	

	return 0;
}