#include<iostream> //#22
#include<string>
#include<cmath>

using namespace std;

void ReadTraingleData(float& A, float& B)
{
	cout << "Please enter triangle side A ?" << endl;
	cin >> A;

	cout << "Please enter triangle base B ?" << endl;
	cin >> B;

}

float CircleAreaByITraingle(float A, float B)
{
	const float PI = 3.1415926535897932384626433832795; // Or PI = 22/7
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));

	return Area;
}

void PrintResults(float Area)
{
	cout << "\n Circle Area = " << Area << endl;
}

int main()
{
	float A, B;
	ReadTraingleData(A, B);
	PrintResults(CircleAreaByITraingle(A, B));
	

	return 0;
}