#include<iostream> //#44
#include<string>
#include<cmath>

using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };

int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number > To);


	return Number;


}

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter day number Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 ? ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Sat:
		return "It's Saturday";
	case enDayOfWeek::Sun:
		return "It's Sunday";
	case enDayOfWeek::Mon:
		return "It's Monday";
	case enDayOfWeek::Tue:
		return "It's Tuesday";
	case enDayOfWeek::Wed:
		return "It's Wednesday";
	case enDayOfWeek::Thu:
		return "It's Thursday";
	case enDayOfWeek::Fri:
		return "It's Friday";
	default:
		return "Not a valid day";
	}

}

int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek());

	return 0;
}