#include<iostream> //#46
#include<string>
#include<cmath>

using namespace std;

void PrintLettersAthZ()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	PrintLettersAthZ();

	return 0;
}