#include<iostream> //#21
#include<string>
#include<cmath>

using namespace std;

float ReadCircumference()
{
	float L;

	cout << "Please enter Circumference L ?" << endl;
	cin >> L;

	return L;

}

float CircleAreaByCircumference(float L)
{
	const float PI = 3.1415926535897932384626433832795; // Or PI = 22/7
	float Area = pow(L, 2) / (4 * PI);

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	
	PrintResults(CircleAreaByCircumference(ReadCircumference()));


	

	return 0;
}