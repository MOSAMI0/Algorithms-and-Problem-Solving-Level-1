#include<iostream> //#20
#include<string>
#include<cmath>

using namespace std;

float ReadSquareSide()
{
	float I;

	cout << "Please enter square side I ?" << endl;
	cin >> I;

	return I;

}

float CircleAreaInscribedInSquare(float I)
{
	const float PI = 3.1415926535897932384626433832795; // Or PI = 22/7
	float Area = (PI * pow(I, 2)) / 4;

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	
	PrintResults(CircleAreaInscribedInSquare(ReadSquareSide()));


	

	return 0;
}