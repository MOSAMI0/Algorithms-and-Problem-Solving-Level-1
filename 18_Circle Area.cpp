#include<iostream> //#18
#include<string>
#include<cmath>

using namespace std;

float ReadRadious()
{
	float R;

	cout << "Please enter radious R ?" << endl;
	cin >> R;

	return R;

}

float CircleArea(float R)
{
	const float PI = 3.1415926535897932384626433832795; // Or PI = 22/7
	float Area = pow(R, 2) * PI;

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	
	PrintResults(CircleArea(ReadRadious()));


	

	return 0;
}