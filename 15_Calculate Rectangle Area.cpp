#include<iostream> //#15
#include<string>

using namespace std;

void ReadNumbers(float& A, float& B)
{
	cout << "Please enter rectangle width A ?" << endl;
	cin >> A;

	cout << "Please enter rectangle length B ?" << endl;
	cin >> B;

}

float CalculateRectangleArea(float A, float B)
{
	return A * B;
}

void PrintResults(float Area)
{
	cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
	float A, B;
	ReadNumbers(A, B);
	PrintResults(CalculateRectangleArea(A, B));


	

	return 0;
}