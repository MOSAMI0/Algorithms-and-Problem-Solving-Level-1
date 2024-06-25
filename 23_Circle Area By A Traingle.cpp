#include<iostream> //#23
#include<string>
#include<cmath>

using namespace std;

void ReadTraingleData(float& A, float& B, float& C)
{
	cout << "Please enter triangle side A ?" << endl;
	cin >> A;

	cout << "Please enter triangle base B ?" << endl;
	cin >> B;

	cout << "Please enter triangle side C ?" << endl;
	cin >> C;

}

float CircleAreaByATraingle(float A, float B, float C)
{
	const float PI = 3.1415926535897932384626433832795; // Or PI = 22/7
	float P;
	P = (A + B + C) / 2;

	float T;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

	float Area = PI * pow(T, 2);
	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	float A, B, C;
	ReadTraingleData(A, B, C);
	PrintResults(CircleAreaByATraingle(A, B, C));


	return 0;
}