#include<iostream> //#19
#include<string>
#include<cmath>

using namespace std;

float ReadDiameter()
{
	float D;

	cout << "Please enter diameter D ?" << endl;
	cin >> D;

	return D;

}

float CircleAreaByDiameter(float D)
{
	const float PI = 3.1415926535897932384626433832795; // Or PI = 22/7
	float Area = (pow(D, 2) * PI) / 4;

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Circle Area By diameter = " << Area << endl;
}

int main()
{
	
	PrintResults(CircleAreaByDiameter(ReadDiameter()));


	

	return 0;
}