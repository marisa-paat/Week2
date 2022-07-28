//write code to check if it is currently a leap year
#include <iostream>
using namespace std;

bool IsLeapYear(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0))
	{
		return bool = true
	}
	else
	{
		 return bool = false
	}
 }

int main() 
{
	int year;
	cout << "Please enter a year: ";
	cin >> year;

	IsLeapYear(year);

	if (true) 
	{
		cout << year << " is a leap year!";
	}
	else
	{
		cout << year " is not a leap year.";
	}
	return 0;
}