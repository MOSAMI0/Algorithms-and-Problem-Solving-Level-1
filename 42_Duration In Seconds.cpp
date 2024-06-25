#include<iostream> //#42
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

stTaskDuration ReadTaskDuration()
{
	stTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days? ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes? ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds? ");

	return TaskDuration;

}

int TaskDurationInSeconds(stTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;


}

int main()
{
	cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration());
	cout << endl;
	
	return 0;
}