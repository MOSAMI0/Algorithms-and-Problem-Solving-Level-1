#include<iostream> //#43
#include<string>
#include<cmath>

using namespace std;

struct stTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);


	return Number;


}

stTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	stTaskDuration TaskDuration;
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHours = 60 * 60;
	const int SecondsPerMinutes = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHours);
	Remainder = Remainder % SecondsPerHours;
	TaskDuration.NumberOfMinutes= floor(Remainder / SecondsPerMinutes);
	Remainder = Remainder % SecondsPerMinutes;
	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;

}

void PrintTaskDuration(stTaskDuration TaskDuration)
{
	cout << "\n";
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
	int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds?");
	PrintTaskDuration(SecondsToTaskDuration(TotalSeconds));
	cout << endl;
	
	return 0;
}